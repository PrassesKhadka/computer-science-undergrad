# Javascript Questionnaire

1. JavaScript and ECMAScript are the same.

- 1 point
  True
  False

2. Inside which HTML element do we put the JavaScript?

- 1 point
  <javascript>
  <script>
  <js>
  none of above

3. Which of the following keywords is used to define a variable in JavaScript?

- 1 point
  var
  let
  const
  all of above

4. What is the correct JavaScript syntax to change the content of the HTML element below?

<p id="demo">This is a demonstration.</p>
*
1 point
document.getElement("p").innerHTML = "Hello World!";
document.getElementById("demo").innerHTML = "Hello World!";
document.getElementByName("p").innerHTML = "Hello World!";
none

5. What does the document.querySelector() return?

- 1 point
  returns all the elements that matches the specified selector
  returns first element that matches the specified selector
  both of above
  none of above

6. What will be the output?
   a = 5 + "9";
   document.write(a);

- 1 point
  5
  9
  59
  throws an error

7. What will be the output?
   var a = "Scaler";
   var result = a.substring(2, 4);
   document.write(result);

- 1 point
  al
  ale
  cal
  caler

8.  Can we do
    const x = [1,2,3,4];
    x[2] = 5;

- 1 point
  yes
  no

9. The external JavaScript file must contain the <script> tag.

- 1 point
  True
  False

10. What will be the result ?
    '12' == 12;
    '12' === 12

- 1 point
  true true
  true false
  false true
  false false

11. How do you round the number 7.25, to the nearest integer?

- 1 point
  Math.round(7.25)
  round(7.25)
  rnd(7.25)
  none

12. How Switch performs a comparison?

- 1 point
  by applying == operator
  by applying === operator
  both of above
  none of above

13. What will be the output?
    (function(){
    setTimeout(()=> console.log(1),2000);
    console.log(2);
    setTimeout(()=> console.log(3),0);
    console.log(4);
    })();

- 1 point
  1,2,3,4
  2,3,4,1
  2,4,3,1
  none of above

14. Is JavaScript case-sensitive?

- 1 point
  Yes
  No

15. Following piece of code is called
    (function() {
    console.log('Hello World');
    })()

- 1 point
  IIFE (Immediately Invoked Function Expression)
  closure
  both of above
  none of above

16. Which function is used to serialize an object into a JSON string in Javascript?

- 1 point
  stringify()
  parse()
  convert()
  none of above

17. What will be the output?
    let sum = 0;
    const a = [1, 2, 3];
    a.forEach(getSum);
    console.log(sum);
    function getSum(ele) {
    sum += ele;
    }

- 1 point
  6
  1
  2
  none of above

18. What keyword is used to declare an asynchronous function in Javascript?

- 1 point
  async
  await
  setTimeout
  none of above

19. How to stop an interval timer in JavaScript?

- 1 point
  clearTimer()
  clearInterval()
  both
  none

20. Name of ... operator is,

- 1 point
  rest
  spread
  destructuring
  none

21. What will be the output?
    [a, b, ...rest] = [10, 20, 30, 40, 50];
    console.log(a,b, rest);

- 1 point
  10,20,30,40,50
  10, 20, [30, 40, 50]
  [10,20,30,40,50]
  none

22. Which of the following are destructuring in JavaScript?

- 1 point
  const obj = { a: 1, b: 2 }; const { a, b } = obj;
  const x = [1,2,3,4]; const [m,n] = x;
  both
  none

23. What will be the output?
    const obj1 = {Name: "Hello", Age: 16};
    const obj2 = {Name: "Hello", Age: 16};
    console.log(obj1 === obj2);

- 1 point
  true
  false
  undefined
  none

24. JavaScript functions are called first class citizen because,

- 1 point
  we can store function in a variable
  we can pass function as argument to another function
  we can return function from another function
  all of above
  none of above

25. What will be the output?  
    const obj1 = { a: 0, b: { c: 0 } };
    const obj2 = Object.assign({}, obj1);
    console.log(obj2)

- 1 point
  { a: 0, b: { c: 0 } };
  throws error
  undefined
  none

26. What will be the output?
    const numbers = [65, 44, 12, 4];
    const newArr = numbers.map(myFunction);
    function myFunction(num) {
    return num \* 10;
    }

- 1 point
  [65, 44, 12, 4]
  [650, 440, 120, 40]
  throws error
  none

27. What will be the output?
    const final = [[0, 1],[2, 3],[4, 5],].reduce((acc, crr) => acc.concat(crr), []);
    console.log(final);

- 1 point
  [0,1,2,3,4,5]
  [[0, 1],[2, 3],[4, 5],]
  throws error
  none

28. How can we use default export and import in JavaScript?

- 1 point
  export default function Abc() { } and import Abc from ""
  export function Abc() { } and import { Abc } from ""
  export default function Abc() { } and import { Abc } from ""
  none

29. What will be the output?
    (function(a){
    return (function(){
    console.log(a);
    a = 6;
    })()
    })(21);

- 1 point
  21
  6
  NaN
  none

30. What's the output?
    const person_1 = { name: 'Dipak' };
    const person_2 = {name: 'Dipendra'};
    function sayHi(age) {
    return `${this.name} is ${age}`;
    }
    console.log(sayHi.call(person_1, 30));
    console.log(sayHi.bind(person_2, 26));

- 1 point
  Dipak is 30, Dipendra is 26
  Dipak is 30, function
  undefined, undefined
  none

31. What's the output?
    const user = { name: 'Test', age: 21 };
    const admin = { admin: true, ...user };
    console.log(admin);

- 1 point
  { admin: true, user: { name: "Test", age: 21 } }
  { admin: true, name: "Test", age: 21 }
  { admin: true }
  none

32. How can we add, remove or toggle the class of a particular DOM element in JavaScript?

- 1 point
  using class
  using classList
  using className
  none

33. What will be the output?
    function someFunction(arr){
    return arr.filter(function(val){
    return val % 2 !== 0;
    }).map(function(val){
    return val \*2;
    })
    }
    console.log(someFunction([1,2,3,4,5,6,7]));

- 1 point
  1,2,3,4,5,6,7
  [2, 6, 10, 14]
  2,6,10,14
  none

34. How do we attach click event listener to the HTML element?

- 1 point
  element.addEventListener("click", clickHandlerFunction);
  document.addEventListener("click", clickHandlerFunction);
  both
  none

35. What will be the output?
    let text = "a,b,c,d,e,f";
    console.log(text.split(","));

- 1 point
  ['a', 'b', 'c', 'd', 'e', 'f']
  abcdef
  'a', 'b', 'c', 'd', 'e', 'f'
  none of above

36. Which is the correct string interpolation in JS?

- 1 point
  `${first_name} ${last_name}`
  first_name + " " + last_name
  both of above
  none of above

37. What will be the output?
    console.log(typeof NaN);

- 1 point
  NaN
  number
  undefined
  null

38. How can we loop through the properties of an Object or Array?

- 1 point
  Using for in loop
  Using for of loop
  both of above
  none of above

39. Which of the following is Nullish Coalescing Operator?

- 1 point
  ??
  ?
  !
  none of above

40. Which of the following is Optional Chaining Operator?

- 1 point
  ?
  ?.
  ??
  all of above

## What is Promise.race() in #javascript ?

Answer 1: In simple words returns the promise whichever is resolved first.
Question 2: Can you give a practical use case for Promise.race() ?

```
const timeout = new Promise((resolve, reject) => {
  setTimeout(() => reject(new Error('Request timed out')), 5000);
});

const data = Promise.race([
  fetch('/api'),
  timeout,
]);

data.then(res => res.json())
  .catch(err => displayError(err));
```
