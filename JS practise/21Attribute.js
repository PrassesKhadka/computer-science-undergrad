let a=first.getAttribute("class");
console.log(a);
let hey=document.getElementsByClassName("hey")[0];
a=hey.getAttribute("id");
console.log(a);


console.log(first.hasAttribute("class"));
console.log(first.hasAttribute("style"));

first.setAttribute("class","name");
console.log(first);

first.removeAttribute("class");
console.log(first);

console.log(first.attributes);
let x=first.attributes;
x=Array.from(x);
x.forEach((element)=>{
    console.log(element);
})    

console.log(first.dataset);
console.log(first.dataset.player);