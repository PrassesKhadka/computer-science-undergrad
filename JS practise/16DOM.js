//Searching the DOM
//Change the card title to red
let ctitle=document.getElementsByClassName("card-title")[0];
ctitle.style.color="red";


ctitle=document.getElementById("firstcardtitle");
ctitle.style.color="blue";

let ctitles=document.querySelectorAll(".card-title");
console.log(ctitles);
ctitles[0].style.color="green";
ctitles[1].style.color="brown";
ctitles[2].style.color="aqua";

//go somewhere-> buttons class is this
document.querySelector(".this").style.color="black";
document.querySelector(".this").style.background="red";

console.log(document.getElementsByTagName('a'));
console.log(document.body.getElementsByTagName('a'));
console.log(document.querySelector(".card").getElementsByTagName('a')) ;
console.log(document.querySelectorAll(".card")[1].getElementsByTagName('a')) ;

console.log(document.getElementsByClassName("card"));
console.log(document.getElementsByClassName("card")[1]);

