// What are javascript Variables ?

// >> = variables are containers used to store data values in programe.


// Three Types Of variabels in JavaScript |

// 1 >> Var    Updated and re-declared
// 2 >> let    Updated but not re-declared
// 3 >> const  no update and no re-declared

// 1 >> var

// Old way to declare variables
// Function-scoped
// Can be re-declared and updated

// Example:

var name = "John";
console.log(name); // John

var name = "David"; // Re-declare allowed
console.log(name); // David

// Another example (scope issue):

if (true) {
    var x = 10;
}
console.log(x); // 10  (still accessible outside block)

// 2 >> let

// Modern way
// Block-scoped
// Can update, but cannot re-declare in the same scope

// Example:

let age = 25;
console.log(age); // 25

age = 30; // Allowed
console.log(age); // 30

// let age = 35; ❌use same key is Not allowed in same block

// Block Scope Example:

if (true) {
    let city = "Delhi";
    console.log(city); // Delhi
}
// console.log(city); // ❌ Error: city is not defined

// 3 >> const 

// Constant value (cannot change)
// Block-scoped
// Must be initialized at declaration

// Example:

const pi = 3.14;
console.log(pi); // 3.14

// pi = 3.15; ❌ Error - cannot change value


// For objects and arrays (values can change inside):

const person = { name: "John", age: 20 };

// Allowed: modifying properties

person.age = 21;
console.log(person.age); // 21

// ❌ Not allowed: assigning new object
// person = { name: "David" }; -> Error


// **<Quick Summary Table>**

// Feature	                     var	      let	     const

// Reassign value	             ✔ Yes	     ✔ Yes	    ❌ No

// Re-declare	                 ✔ Yes	     ❌ No	   ❌ No

// Scope	                     Function	  Block	     Block

// Must assign value at start?	 ❌ No	    ❌ No	  ✔ Yes