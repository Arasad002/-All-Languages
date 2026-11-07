// Chapter -- 3. Loops & Function

// Seven types loops in javascript

// 1. for loop         -->   Best when you know how many times you want to loop.
// 2. for in loop      -->   Used to loop over object properties.
// 3. for of loop      -->   Used to loop over iterables like arrays, strings.
// 4. for while loop   -->   Runs as long as a condition is true
// 5. do while loop    -->   Runs at least once, even if the condition is false.
// 6.Array.forEach()   -->   A modern and clean way to loop through arrays.
// 7.map() (for transforming arrays) --> Creates a new array.

// 1. For loop

// for (let i = 0; i <= 5; i++) {
//     console.log(i);
// }

// output == > 0 1 2 3 4 5

// 2. for in loop

// const detail = {
//     name :"alex",
//     age : 30
// }

// for (const key in detail) {
//     console.log(key,detail[key]);
// }

// output ==>  name alex
//             age 30


// 3.for of loop

const fruits = ["apple","banana","mango"]


  