// condition stattment

// **stattment**

/*
1. if Statement
2. if-else Statement
3. if-else if-else Ladder
4. switch Statement (optional)
5. Ternary (Conditional) Operator
*/

// 1. if Statement

// Used when you want to run code only if a condition is true.

let year = 20;

if(year >= 18){
    console.log("You are eligible to vote");
}


// 2. if-else Statement

// Runs one block when condition is true, otherwise another block.

let mark = 35 

if (mark => 40) {
    console.log("Pass");
}
else{
    console.log("fail");
}


// 3. if-else if-else Ladder

let per = 85

if (per => 90) {

    console.log("Grade A");

}
else if (per >= 80) {

    console.log("Grade B");

}
else if(percentage >= 70){
    console.log("Grade C");
}
else {
    console.log("Grade D");
}

// 4. switch Statement (optional)

let day = 2;

switch(day){

    case 1: 
        console.log("Monday");
        break;
    case 2: 
        console.log("Tuesday");
        break;
    case 3: 
        console.log("Wednesday");
        break;
    default:
        console.log("Invalid day");
}


// 5. Ternary (Conditional) Operator

// Short form of if-else.

let age = 16;

let result = (age >= 18) ? "Adult" : "Minor";

console.log(result);
