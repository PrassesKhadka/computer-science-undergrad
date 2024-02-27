// Module pattern->Similar to factory functions.The main difference is how they're created
// Concept:Same as factory function
// But: defining pattern different 

// Blogpost:
//Most common design patterns used in JavaScript
// modules are JavaScript “classes”. One of the many advantages of classes is encapsulation - protecting states and behaviors from being accessed from other classes. The module pattern allows for public and private (plus the lesser-know protected and privileged) access levels.

// The pattern is:
// (function() {

//     // declare private variables and/or functions

//     return {
//         // declare public variables and/or functions
//     }

// })();

// Modules should be IIFE(Immediately Invoked Function Expressions)->but unlike IIFE,it will return an object instead of a function
// -->Protects variables and methods->Private scope

// Eg:
let a_random_function=(function (){
    let a=5;
    // Returns an object
    return {var:()=>{
        console.log(a)
    }
    };
})()

// console.log(a)  //Error
console.log(a_random_function.a)    //undefined
a_random_function.var()  //prints a 


// Another Example:
// Creating a module function
// The concepts are exactly the same as the factory function. However, instead of creating a factory that we can use over and over again to create multiple objects, the module pattern wraps the factory in an IIFE (Immediately Invoked Function Expression).
const calculator=(()=>{
    const add=(a,b)=> a+b;
    const sub=(a,b)=> a-b;
    const mul=(a,b)=> a*b;
    const div=(a,b)=> a/b;
    // These are objects:{add:a+b,sub:a-b.....} #key-value pair
    return {add,sub,mul,div}
})()

console.log('Calculator Results:')
console.log(calculator.add(2,4))
console.log(calculator.sub(2,4))
console.log(calculator.mul(2,4))
console.log(calculator.div(2,4))
