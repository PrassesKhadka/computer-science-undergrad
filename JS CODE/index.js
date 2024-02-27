// Challenge 1:Your age in days
function func()
{
    var age=prompt("Enter your age")
    let days=(age*365);
    var h1=document.createElement('h1');
    var answer=document.createTextNode('You are'+days+' days old ');
    h1.setAttribute('id','age');
    h1.appendChild(answer);
    
    document.getElementById("flex-box-result").appendChild(h1);
}

function func1()
{
    document.getElementById('age').remove();
}
 
// Challenge 2:Player Generator
function func2()
{
    var image=document.createElement('img');
    var div=document.getElementById('player-generator');
    image.src='rooney.jpg';
    div.appendChild(image);

}

// Challenge 3:Rock,Paper,Scissor Game
function f(yourchoice)
{
    // #This is your choice
    console.log(yourchoice.id);  
    var botchoice;
    botchoice=botchoicegen();
    // [0,1]human lost bot won
    var winner=battle(yourchoice,botchoice);
    var message=finalmessage(winner);
    // Prints whether you won,lost or drew also indicating it's color red,green,yellow #objects implementation
    console.log(message);

    var final=lastfinal(yourchoice,botchoice,message)
}

function botchoicegen()
{
    var random=(Math.floor(Math.random()*3));
    var p=['rock','paper','scissor'][random];
    // #This is bot's choice
    console.log(p);
    return p;
}

function battle(yourchoice,botchoice)
{
    //JSON objects
    var winner=
    {
        'rock':{'rock':0.5,'paper':0,'scissor':1},
        'paper':{'rock':1,'paper':0.5,'scissor':0},
        'scissor':{'rock':0,'paper':1,'scissor':0.5}
    }
    var yourscore=winner[yourchoice.id][botchoice];
    // This prints the result
    console.log(yourscore);
    return yourscore;
}

function finalmessage(winner)
{
    //Final message is going to be an object
    if(winner==1)
        return {'message':'You Won!!!','color':'green'};
    else if(winner==0)
        return {'message':'You lost!!!','color':'red'};
    else if(winner==0.5)
        return {'message':'Its a draw!!!','color':'yellow'};
}       

function lastfinal(yourchoice,botchoice,message)
{

    //This all code to show message:you won,lost,drew
    //# HTML DOM portion only
//    var image=
//    {
//         'rock':document.getElementById('rock'),

//         'paper':document.getElementById('paper'),

//         'scissor':document.getElementById('scissor')
//    }

   //Remove all the divs
   document.getElementById('rock').remove();
   document.getElementById('paper').remove();
   document.getElementById('scissor').remove();

   var you=document.createElement('span');
   var messageDiv=document.createElement('div');
   var bot=document.createElement('span');
   
   you.innerHTML="<h3 style='color:blue;font-size:25px;padding:10px;'>Your choice was: "+yourchoice.id+" </h3>";

   messageDiv.innerHTML="<h1 style='color:" + message['color']+" ;font-size:40px;padding:30px;'>" + message['message'] +"</h1>";

   bot.innerHTML="<h3 style='color:red;font-size:25px;padding:10px;'>The computer's choice is: " + botchoice + "</h3>";

   document.getElementById('rockpapergame').appendChild(you); 
   document.getElementById('rockpapergame').appendChild(messageDiv);
   document.getElementById('rockpapergame').appendChild(bot);
}

// Challenge 4:Button color changer


//returns an array of data having tag ->  button
var all_buttons=document.getElementsByTagName('button');
console.log(all_buttons);
var copy_all_buttons=[]; //an empty array
for(let i=0;i<all_buttons.length;i++)
{
    copy_all_buttons.push(all_buttons[i].classList[1]); //gets second class 0 will give you the first class
    //i.e btn-primary from btn btn-primary as we need the colour which is obtained from btn-primary
}
console.log(copy_all_buttons);

function buttoncolorchange(change)
{
    if(change.value=="red")
        buttonred();
    else if(change.value=="green")
        buttongreen();
    else if(change.value=="reset")
        buttonreset();
    else if(change.value=="random")
        buttonrandom();
}

function buttonred()
{
    for(let i=0;i<all_buttons.length;i++)
    {
        all_buttons[i].classList.remove(all_buttons[i].classList[1]);
        all_buttons[i].classList.add('btn-danger');
    }
}

function buttongreen()
{
    for(let i=0;i<all_buttons.length;i++)
    {
        all_buttons[i].classList.remove(all_buttons[i].classList[1]);
        all_buttons[i].classList.add('btn-success');
    }
}

function buttonreset()
{
    for(let i=0;i<all_buttons.length;i++)
    {
        all_buttons[i].classList.remove(all_buttons[i].classList[1]);
        all_buttons[i].classList.add(copy_all_buttons[i]);
    }
}

function buttonrandom()
{
    for(let i=0;i<all_buttons.length;i++)    
    {
        let random1=Math.floor(Math.random()*4);//generates number 0,1,2,3
        let randomclass=['btn-primary','btn-success','btn-warning','btn-danger'][random1];
        console.log(randomclass);
        all_buttons[i].classList.remove(all_buttons[i].classList[1]);
        all_buttons[i].classList.add([randomclass]);
        //OR
        //let randomclass=['btn-primary','btn-success','btn-warning','btn-danger'];
        //all_buttons[i].classList.add(randomclass[random1]);
    }
}