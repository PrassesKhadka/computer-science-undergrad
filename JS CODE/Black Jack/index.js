//Main object:key value pair 
let blackjackgame=
{
    'you':{'scorespan':'#your-score','div':'#your-box','score':0},
    
    'dealer':{'scorespan':'#dealer-score','div':'#dealer-box','score':0},

    //an array
    'cards':['2','3','4','5','6','7','8','9','10','A','K','J','Q'],

    //Maps the card with it's corresponding values eg:J,K,Q will have values 10 and A can be either 1 or 11 so we create and array
    'cardsmap':{'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,'10':10,'J':10,'K':10,'Q':10,'A':[1,11]},
    'wins':0,
    'loss':0,
    'draws':0,

    //#Update:
    //once you click stand #user's turn is over,you can't click hit then
    //once the game is over then only you can click deal
    'isStand':false,
    'turn_over':false,
    'stand_after_hit':false,
}


// All about showing random cards on your and dealer's box(or div) and removing then when clicked deal
const YOU=blackjackgame['you'];
const DEALER=blackjackgame['dealer'];

const hitsound= new Audio("blackjack_assets/sounds/swish.m4a");
const winsound=new Audio("blackjack_assets/sounds/cash.mp3");
const losssound=new Audio("blackjack_assets/sounds/aww.m4a");

// when hit id i.e hit button is clicked blackjackhit function is executed
document.querySelector('#hit').addEventListener('click',blackjackhit);
//when deal is clicked both dealer and your box all card will disappear i.e blackjackdeal function is executed
document.querySelector('#deal').addEventListener('click',blackjackdeal);

document.querySelector('#stand').addEventListener('click',blackjackstand);




//Main functions:for hit,deal and stand
function blackjackhit()
{
    //once hit clicked then only you can click stand
    blackjackgame['stand_after_hit']=true;
    //once stand clicked then you cannot click hit thus
    if(blackjackgame['isStand']===false)
    {
        let card=randomcardgenerator();
        //First card shown then the score is updated A+10 shown then updatescore=21 then again 2 is shown and
        //then updated =22 now goes to showcard and cannot show
        showcard(YOU,card);
        updatescore(YOU,card);//This is updating the score in backend i.e on object blackjack game and you:your-score logic for the value of A as 1 or 11
        showscore(YOU);
    }
}
function blackjackdeal()
{
    //once deal is clicked new game thus the isStand should revert back to false
    blackjackgame['isStand']=true;
    blackjackgame['turn_over']=false;

    //Selects all the image in your box and stores in your image
    let yourimages=document.querySelector('#your-box').querySelectorAll('img');
    console.log(yourimages);
    // in console gives an empty list but when we hit and images pop in then the list is filled
    
    let dealerimages=document.querySelector('#dealer-box').
    querySelectorAll('img');
    console.log(dealerimages);
    
    // Since it is an array we can remove it like this
    // yourimages[0].remove();
    
    for(let i=0;i<yourimages.length;i++)
    {
        yourimages[i].remove();
    }
    
    for(let j=0;j<dealerimages.length;j++)
    {
        dealerimages[j].remove();
    }
    
    //Once the deal is clicked the score also has to reset frontend as well as backend
    //Back-end corrected:
    YOU['score']=0;
    DEALER['score']=0;
    //Front-end corrected:
    document.querySelector('#your-score').textContent='0';
    document.querySelector('#your-score').style.color='white';
    
    document.querySelector('#dealer-score').textContent='0';
    document.querySelector('#dealer-score').style.color='white';
    
    //The you won,draw section also should be removed
    document.querySelector('#score-message').textContent="Let's play";
    document.querySelector('#score-message').style.color='black';
}
function blackjackstand()
{
    blackjackgame['isStand']=true;

    //if(blackjackgame['turn_over']===false && blackjackgame['stand_after_hit']===true)
    while(blackjackgame['turn_over']===false && blackjackgame['stand_after_hit']===true)
    {
        let cardfordealer=randomcardgenerator();
        showcard(DEALER,cardfordealer);
        updatescore(DEALER,cardfordealer);
        showscore(DEALER,cardfordealer);
        
        
        //Bot logic
        if(DEALER['score']>15)
        {
            //Shows the text node at top saying if you won,lost or drew
            showwinner(computewinner());
            blackjackgame['turn_over']=true;
        }
    }
}





//Other functions inside hit,stand and deal
function showcard(activeplayer,card)
{
    //If score>21 donot show card in the front-end
    if(activeplayer['score']<=21)
    {
        let cardimage=document.createElement('img');
        // cardimage.src='blackjack_assets/images/Q.png';
        // #Using string template literals->changing single quotes into back ticks and dollor sign.You can use string concatanation as well
        cardimage.src=`blackjack_assets/images/${card}.png`;
        // document.querySelector(YOU['div']).appendChild(cardimage);
        // if you select dealer(activeplayer) then it will show it in dealer box otherwise your(activeplayer) in your box(div)
        document.querySelector(activeplayer['div']).appendChild(cardimage);
        hitsound.play(); 
    }
}

function randomcardgenerator()
{
    let random=(Math.floor(Math.random()*13));
    let randomcard=blackjackgame['cards'][random]; //returns 2,3,4......
    console.log(randomcard);
    return randomcard;
}







//Next Section:About computing the values of our or dealers card(#logic) and displaying next to 
//Your Score:(5 or 10 or 21 but not more than 21)

function updatescore(activeplayer,card)
{
    //Logic for value of A = 1 or 11
    //Condition: when is A 11 or 1 ? : If adding 11 keeps me below 21 then add 11 otherwise add 1

    if(card=='A')
    {
        if(activeplayer['score']+blackjackgame['cardsmap'][card][1]<=21)//array so [card][0]=1 or 'A'[1],card[1]=11
        {
            activeplayer['score']+=blackjackgame['cardsmap'][card][1];
        }
        else
        {
            activeplayer['score']+=blackjackgame['cardsmap'][card][0];
        }
    }

    else

    {
        activeplayer['score']+=blackjackgame['cardsmap'][card];
    }
        
}

function showscore(activeplayer)
{ 
    if(activeplayer['score']>21)
    {
        document.querySelector(activeplayer['scorespan']).textContent='BUST!';
        document.querySelector(activeplayer['scorespan']).style.color='red';
    }
    else
    {
        document.querySelector(activeplayer['scorespan']).textContent=activeplayer['score'];
    }
}

//Logic for when you win or when computer wins or the game draws
function computewinner()
{
    let winner;
    if(YOU['score']<=21)
    {
        if(YOU['score']>DEALER['score'] || DEALER['score']>21)
        {
            console.log('You won');
            winner=YOU;
            blackjackgame['wins']++;
        }
        else if(YOU['score']<DEALER['score'])
        {
            console.log('You lost');
            winner=DEALER;
            blackjackgame['loss']++;
        }
        else if(YOU['score']==DEALER['score'])
        {
            console.log('You drew');
            blackjackgame['draws']++;
        }
    }
    
    else if(YOU['score']>21 && DEALER['score']<=21)
    {
        console.log('You lost');
        winner=DEALER;
        blackjackgame['loss']++;
    }
    
    else if(YOU['score']>21 && DEALER['score']>21)
    {
        console.log('You drew');
        blackjackgame['draws']++;
    }

    console.log('Winner is',winner);
    console.log(blackjackgame);
    return winner;
}

function showwinner(winner)
{
    let message,messagecolor;
    if(winner===YOU)
    {
        message='You Won!!!';
        messagecolor='green';
        winsound.play();
        //for scoreboard
        document.querySelector('#wins').textContent=blackjackgame['wins'];
    }
    else if(winner===DEALER)
    {
        message='You Lost!!!';
        messagecolor='red';
        losssound.play();
        //for scoreboard
        document.querySelector('#losses').textContent=blackjackgame['loss'];
    }
    else
    {
        message='You drew!!!';
        messagecolor='blue';
        //for scoreboard
        document.querySelector('#draws').textContent=blackjackgame['draws'];
    }

    document.querySelector('#score-message').textContent=message;
    document.querySelector('#score-message').style.color=messagecolor;
}

