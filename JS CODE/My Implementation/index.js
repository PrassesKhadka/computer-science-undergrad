function f(you)
{
    let botchoice=botchoicegen();
    let yourchoice=you.id;
    console.log("Your-choice",yourchoice);
    let battleresult=battle(botchoice,yourchoice);
    let message_variable=messagegenerator(botchoice,yourchoice,battleresult);
    console.log(message_variable['sentence']);
    console.log(message_variable['color']);
    let final=message(message_variable,yourchoice,botchoice);
}

function botchoicegen()
{
    let randomnum=(Math.floor(Math.random()*3));
    let gen=['rock','paper','scissor'][randomnum];
    console.log("Bot-choice",gen);
    return gen;
}

function battle(botchoice,yourchoice)
{
    //An object:Key-value pair
    let winner=
    {
        'rock':{'rock':0.5,'paper':0,'scissor':1},
        'paper':{'rock':1,'paper':0.5,'scissor':0},
        'scissor':{'rock':0,'paper':1,'scissor':0.5},
    }
    let result=winner[yourchoice][botchoice];
    console.log("Result",result);
    return result;
}

function messagegenerator(botchoice,yourchoice,battleresult)
{
    //Returns an object
    let message;
    if(battleresult===1)
    {
        message=
        {
            'sentence':'You Won!!!',
            'color':'green',
        }
    }
    else if(battleresult===0)
    {
        message=
        {
            'sentence':'You Lost!!!',
            'color':'red',
        }
    }
    else
    {
        message=
        {
            'sentence':'You Drew!!!',
            'color':'blue',
        }
    }
    console.log(message);
    return message;
}
function message(message_variable,yourchoice,botchoice)
{
    // let display_message=document.querySelector('#display');
    // display_message.remove();
    
    let all_images=document.querySelector('#images').querySelectorAll('div');
    console.log("All selected images nodelist: ",all_images);
    for(let i=0;i<all_images.length;i++)
    {
        all_images[i].remove();
    }
    let div=document.createElement("div");
    div.className="display";
    div.innerHTML="<h1 style='color:"+message_variable['color']+"'>"+message_variable['sentence']+"</h1>"    
    document.body.firstElementChild.append(div);
   
    div=document.getElementById("images");
    console.log(document.getElementById("images"));
    let img1=document.createElement('img');
    img1.classList.add("image");
    let img2=document.createElement('img');
    img2.classList.add("image");
    let yourchoice_photo=`${yourchoice}.png`;
    let botchoice_photo=`${botchoice}.png`;
    console.log(yourchoice_photo,botchoice_photo);
    img1.setAttribute("src",yourchoice_photo);
    img2.setAttribute("src",botchoice_photo);
    console.log(document.getElementById("images"));
    div.append(img1);
    div.append(img2);
}