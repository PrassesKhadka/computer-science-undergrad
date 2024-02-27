//Snake,Water,Gun game
let yourchoice,botchoice,botchoicegen,winner,winnergen;
let obj;

yourchoice=prompt("Enter s,w,or g");
console.log(yourchoice);


botchoicegen=()=>
{
    let randomnum=Math.floor(Math.random()*3);
    return ['s','w','g'][randomnum];
}
botchoice=botchoicegen();
console.log(botchoice);


winnergen=(yourchoice,botchoice)=>
{
    obj=
    {
        's':{'s':0.5,'w':1,'g':0},
        'w':{'s':0,'w':0.5,'g':1},
        'g':{'s':1,'w':0,'g':0.5},
    }
    return obj[yourchoice][botchoice];
}

winner=winnergen(yourchoice,botchoice);
console.log(winner);
document.write(`Your choice:${yourchoice} Computer choice:${botchoice} ${winner===0.5?`You drew`:winner?`You won`:`Computer won`}`);
if(winner===1)
    alert("You won!!!");
else if(winner===0)
    alert("You lost!!!");
else
    alert("You drew!!!");





