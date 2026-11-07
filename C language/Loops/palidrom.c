    
// 9)  paldrom no 

//     Enter the no = 235
//     Reverse no 532
//     this is not palidrom
    
//     enter the no 151
//     reverse no 151
//     this is palidrom

#include <stdio.h>

int main()
{
    int no, rem, rev = 0;

    printf("Enter the no = ");
    scanf("%d", &no);

    int n = no;

    while (no != 0)
    {
        rem = no % 10;
        rev = (rev * 10) + rem;
        no /= 10;
    }

    printf("Sum Of Digit = %d\n", rev);

    if (rev == n)
    {
        printf("This is Palidrom"); 
    }
    else
    {
        printf("This is Not paldrom");
    }
    
    


    return 0;
}