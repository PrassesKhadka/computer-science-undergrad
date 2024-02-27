// Factory Function and the Module Pattern 
// Basically used instead of Constructor--> returns object 
// We don't have to initialize using new or this keyword to initialise
// Only purpose is to take input and return object #returns an object
// We can encapsulate private and public data(the data returned) just like in C++ classes and objects and Mocule pattern
// Eg:

const factoryFunction=(name,author,pages)=>{
    // JS shorthand property for same name key and value pair of an object
    return {name,author,pages}
    // Returns an object
}
const factoryFunction2=(something,otherthing,nothing)=>{
    // JS longhand property for different name key and value pair of an object
    return{name:something,author:otherthing,pages:nothing}
}

const Book=factoryFunction('Atomic Habits','James Clear',335)
console.log(Book.name)  //prints Atomic Habits
console.log(Book.author) //James Clear
console.log(Book.pages)   //335

// Different object from same factory function just like classes,object,constructors
const Book2=factoryFunction('Goosebumps','Stephen',125)
console.log(Book2.name)  //prints Goosebumps
console.log(Book2.author) //Stephen
console.log(Book2.pages)   //125

const Book3=factoryFunction2('Harry Potter','JK Rowling',457)
console.log(Book3.name)   //prints Harry Potter
console.log(Book3.author) //JK Rowling
console.log(Book3.pages)  //457

// A useful side-effect of encapsulating the inner workings of our programs into objects is namespacing. Namespacing is a technique that is used to avoid naming collisions in our programs. For example, it’s easy to imagine scenarios where you could write multiple functions with the same name. In our calculator example, what if we had a function that added things to our HTML display, and a function that added numbers and operators to our stack as the users input them? It is conceivable that we would want to call all three of these functions add which, of course, would cause trouble in our program. If all of them were nicely encapsulated inside of an object, then we would have no trouble: calculator.add(), displayController.add(), operatorStack.add().

// Inheritences with factories
