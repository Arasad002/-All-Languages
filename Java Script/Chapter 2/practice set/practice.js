
// Q - 1 >> uses logical operators to check whether a person's age lies between 10 and 20:

let age = 18

if (age > 10 && age < 20) {
    console.log("The age lies between 10 and 20");
} else {
    console.log("The age is not between 10 and 20");
}


// Q - 3 >> Write a programe to find whether number is divisble 2 and 3 

let no = 18

console.log(no % 2 == 0 && no % 3 == 0);

// Q - 4 >> Write a programe to find whether number is divisble 2 or 3

let num = 10

console.log(num % 2 == 0 || num % 3 == 0);

// Q - 5 >> Print "You can drive" or "You can not drive" based on age being greater than 18 using turnnery Operator

let year = 20;

let result = (year > 18) ? "You can drive" : "You can not drive";

console.log(result);
