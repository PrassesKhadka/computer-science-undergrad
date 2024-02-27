//prompt alert and confirm
let age,runagain;
do
{
    age=prompt("Enter your age");
    age=Number.parseInt(age);
    if(age<0)
    console.error("Negative number not allowed");
    if(age>=18)
    alert("You can drive");
    else
    alert("You cannot drive");
    runagain=confirm("Do you want to continue");
}while(runagain);

//BOM
let num=prompt("Enter number greater than 4");
num=Number.parseInt(num);
if(num>4)
    location.href=("https://youtube.com");

//DOM
//change colour based on user input 
let value=prompt("Enter a colour");
document.body.style.background=value;
