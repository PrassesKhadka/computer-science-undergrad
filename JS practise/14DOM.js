//Element only Navigation 
let b=document.body;
console.log("First child of b is: ",b.firstChild);
console.log("First Element child of b is: ",b.firstElementChild);
console.log("Last child of b is: ",b.lastElementChild);
console.log("previous Element sibling of b is: ",b.previousElementSibling);
console.log("next Element sibling of b is: ",b.nextElementSibling);

const changeBgRed=()=>{
    document.body.firstElementChild.style.background="blue";
}


