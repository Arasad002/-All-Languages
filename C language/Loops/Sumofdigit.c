// 7) Sum of digit 

//     Enter the no = 235
//        Sum of Digit no =10


#include <stdio.h>
int main ()
{
    int no,  sum = 0, rev;

    printf("Enter The No = ");
    scanf("%d", &no);

    while (no != 0)
    {
        rev = no % 10;
        sum += rev;
        no /= 10;
    }
    
    printf("Sum of Digit = %d\n", sum);



    return 0;
}