// Chapter 1 Practice set

// Q - 1 >>  create a variables of type string and try to add a number to it

let text = "Hello";  // string
let num = 10;        // number

let result = text + num; 

console.log(result);

// Q - 2 >> use type of oprates to find the datatype of the string in last question

console.log(typeof(result));


// Q - 3 >> Create a const object in javascript can you change it to hold a number later ?

// ans 

// ❌ No, you cannot change a const object itself to hold a number later.

// When you create a variable using const, the reference cannot be changed.

const person = {
    name: "John",
    age: 30
};

console.log(person);

// ❌ Trying to change it to a number

// person = 50;  Error


// Q - 4 >> Try to add a new key to the Const object in last question were you after to do it ??

const person1 = {
  name: "John",
  age: 30
};

// Allowed: changing values inside the object

person1.age = 40;
person1.city = "Delhi";

console.log(person1);

// Q - 5 >>  wirte a js program to create a word-meaning dictionary of 5 words

// Here is a simple JavaScript program to create a word-meaning dictionary of 5 words:

const dictionary = {

    "Innovate": "To introduce something new or make changes",
    "Benevolent": "Kind and helpful",
    "Eloquent": "Fluent and clear in speaking or writing",
    "Serene": "Calm, peaceful, and untroubled",
    "Diligent": "Showing hard work and care in doing tasks"
};

console.log(dictionary);

// You can later access meanings like this:

console.log(dictionary["Serene"]);