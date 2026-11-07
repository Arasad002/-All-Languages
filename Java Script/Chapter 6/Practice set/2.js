// Q >> 1. write a program using prompt function to take 
// input of age as a value from the user and use alert to 
// tell him if he can drive !!

let a = Number(prompt("Enter the no = "))

    if (a >= 18) {
        console.log("You can drive");
    }
    else {
        console.error("You can't Drive");
    }
// Q >> 2. in Q1 use confirm to ask 
// the user if he wants to see the prompt again

// Q >> 3.In the previous question use 
// console error to log the error if age enter is nagative

let b = confirm("Try Again to input ")

if (b) {
    let b = Number(prompt("Enter the no = "))

    if (b >= 18) {
        console.log("You can drive");
    }
    else {
        console.error("You can't Drive");
    }

}

// Q >> 4. Write a program to change the url to google.com 
// (Redirection) if user enters a number greater than 4.

let input = Number(prompt("Enter the no ="))

while (true) {
    if (input > 4) {
        window.location.href = "https://www.google.com"
        break ;

    } else {
        console.log("Try Again !!");

    }
}

// Q >> 5.Change the background of the page to yellow, red, or any 
// other color on user input through prompt.

let col =(prompt("Enter the Color Name - "))

switch (col) {
    case 'red':
        document.body.style.background = 'red';
        break;
    case 'blue':
        document.body.style.background = 'blue';
        break;
    case 'green':
        document.body.style.background = 'green';
        break;
    case 'pink':
        document.body.style.background = 'pink';
        break;

    default:
        document.body.style.background = 'black';
        break;
}