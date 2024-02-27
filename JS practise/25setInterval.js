//setInterval and setTimeout in JS
document.write("Hello");

setTimeout
let a=setTimeout(()=>{
    alert("I am inside of setTimeout")
},5000)


//clearTimeout
let b=prompt("Do you want to run the settimeout");
if("n"==b)
{
    clearTimeout(a);
}
console.log(a);


//setInterval
// setInterval(()=>{
//     document.write("Hi!!!! it was a pleasure meeting you.Now I have to leave but I will come back later!!!");
// },3000)

function z(x,y)
{
    console.log(x+y);
}
let n=setInterval(z,1000,1,2);
clearInterval(n);


