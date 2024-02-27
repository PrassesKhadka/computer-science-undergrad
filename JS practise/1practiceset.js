//Create a variable of type string and try to add a number to it 

let a="prasses";
let b=1;
console.log(a+b);

//Use typeof operator to find the datatype of the string in last question

console.log(typeof(a+b));

//Create a const object in js.Can you change it to hold a number later

const obj=
{
    'name':'prasses',
    'class':'Bachelors',
    'sem':3,
}
console.log(obj['name']);
//obj=2;   //Not possible since const
//console.log(obj);

//Try to add a new key to the const object in Problem 3

obj['friend']='Shubham';
console.log(obj);
//We cannot change the const obj to any no,string,another obj but we can still change the content inside it eventhough it's a const.

//Write a JS program to create a word-meaning dictionary of 5 words
const dictionary=
{
    'tyrannical':'dictatorial',
    'levity':'the treatment of a serious matter as a joke',
    'scrutiny':'examine closely',
    'sly':'cunning',
    'anomaly':'deviating from what is normal',
}
console.log(dictionary);
var word=prompt("Search a word you want to the meaning of :");
console.log(dictionary[word]);

    




