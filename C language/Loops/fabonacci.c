// 5) febonacci

//     Enter the Range = 7
//     The febonacci series = 1,1,2,3,5,8,13,21

//     logic 1+1,1+2,2+3,3+5.
//     ans = 2,3,5,8.

#include <stdio.h>
int main()
{

    int a = 0, b = 1, i, range;
    int s;

    printf("Enter the Range  = ");
    scanf("%d", &range);

    printf("The Febonacci series = ");
    for (i = 1; i <= range; i++)
    {
        s = a + b;
        printf("%d,", s);
        a = b;
        b = s;
    }

    return 0;
}
