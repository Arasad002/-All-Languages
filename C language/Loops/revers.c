// 8) Reverse no 
//     Enter the no = 235
//         reverse no is = 532

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

    printf("Reverse no : %d", rev);

    return 0;   
}   