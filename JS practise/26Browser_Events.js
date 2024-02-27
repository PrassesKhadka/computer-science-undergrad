//Events
// let a=document.getElementsByClassName("container")[0];
// a.onclick=()=>{ 
//     a.innerHTML="Hello World"; 
// }





//Handling Browser Events
//addEventListner

let x=function(e){
    console.log(e);
    console.log(e.target);
    console.log(e.type);
    console.log(e.currentTarget);
    console.log(e.clientY);
    console.log(e.clientX);
    // alert("Hello World 1!!!");
};

btn.addEventListener('click',x);

// let y=function(e){
//     alert("Hello World 2!!!");
// };
// btn.addEventListener('click',y);


// let a=prompt("What is your favourite Number?");
// if(a=="2")
// {
//     btn.removeEventListener('click',x)
// }






