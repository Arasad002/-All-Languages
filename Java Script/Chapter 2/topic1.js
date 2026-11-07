// Chaper - 2 expression and condition

// oprater in javascript

// four type Operators in javascript

/*
1. Arithmeric operators
2. Assignment Operators
3. Comparison Operators
4. Logical Operators
*/

// 1 >> Arithmeric operators

let a = 10;
let b = 3;

// code                                        Output

console.log("Addition:", a + b);            // 13
console.log("Subtraction:", a - b);         // 7
console.log("Multiplication:", a * b);      // 30
console.log("Division:", a / b);            // 3.333
console.log("Modulus:", a % b);             // 1
console.log("Exponentiation:", a ** b);     // 1000

// Increment (++)

// Increases a number by 1.

let y = 5;
y++;
console.log(y);  // 6

// Decrement (--)

// Decreases a number by 1.

let z = 5;
z--;
console.log(z);  // 4


// 2 >> Assignment Operators

// Assignment Operator Examples

let x = 10;   // simple assignment
console.log("Initial value of x:", x);      //10

x += 5;       // same as x = x + 5
console.log("After x += 5:", x);            //15

x -= 3;       // same as x = x - 3
console.log("After x -= 3:", x);            //12

x *= 2;       // same as x = x * 2
console.log("After x *= 2:", x);            //24

x /= 4;       // same as x = x / 4
console.log("After x /= 4:", x);            //6

x %= 3;       // same as x = x % 3
console.log("After x %= 3:", x);            //0

x **= 3;      // same as x = x ** 3
console.log("After x **= 3:", x);           //0


// 3 >> Comparison Operators

/*
| Operator | Description                 |
| -------- | --------------------------- |
| `==`     | Equal (checks value)        |
| `===`    | Strict equal (value + type) |
| `!=`     | Not equal                   |
| `!==`    | Strict not equal            |
| `>`      | Greater than                |
| `<`      | Less than                   |
| `>=`     | Greater than or equal       |
| `<=`     | Less than or equal          |
*/

let j = 10;
let k = "10";
let s = 5;

console.log(j == k);   // true
console.log(j === k);  // false
console.log(j != s);   // true
console.log(j !== k);  // true
console.log(j > s);    // true
console.log(j < s);    // false
console.log(j >= 10);  // true
console.log(j <= 5);   // false


// 4 >> Logical Operators

// 1. AND ( && )

// Returns true only if both conditions are true.

let m = 10;
let n = 20;

console.log(m < n && m > 5);   // true


// 2. OR ( || )

// Returns true if at least one condition is true.

let age = 15;

console.log(age > 18 || age == 15); // true


// 3. NOT ( ! )

// Reverses the result.

let no = 10

console.log(!no); // false
