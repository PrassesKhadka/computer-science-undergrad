//Practice Set
//Create a nav bar and change the color of its first element to red
let firstelement=document.getElementsByTagName("ul")[0].firstElementChild;
console.log(firstelement);
firstelement.style.color="red";

//Create a table without tbody.Now use "View page Source" button to check whether it has a tbody or not


//Create an element with 3 children.Now change the color of first and last element to green
firstelement=document.getElementsByTagName("div")[0].firstElementChild
let lastelement=document.getElementsByTagName("div")[0].lastElementChild
console.log(firstelement);
console.log(lastelement);
firstelement.style.color="green";
lastelement.style.color="green";


//Change background of all <li> tags to cyan

//This method 1:

// let li=document.getElementsByTagName("li");
// li=Array.from(li);
// for(let i=0;i<li.length;i++)
// {
//     li[i].style.color="cyan";
// }

//This method 2:
Array.from(document.getElementsByTagName("li")).forEach((element)=>{
    element.style.background="cyan";
})


//Which of the following is used to look for the farthest ancestor that matches a given CSS Selector
//We have to use closest->No,
let x=document.getElementsByTagName("li")[0];
let y=x.closest("nav");
console.log(y);



