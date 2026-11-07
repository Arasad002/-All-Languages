#include <stdio.h>
int main(){

    char ch;

    printf(" How many Days in a Months ??\n");
    printf("A) 30 B) 50 C) 25 D) 40 \n");

    printf("Enter The Ans (A to D) = ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'A':
        printf("Well done , 'This Is Write Ans !!' ");
        break;

    case 'B':
        printf("'This Is Wrong Ans !!' ");
        break;  

    case 'C':
        printf("'This Is Wrong Ans !!' ");
        break;

    case 'D':
        printf("'This Is Wrong Ans !!' ");
        break;
        
        
    default:
        printf("Please enterd a valid Option!!");
        break;
    }


    return 0;
}