

// 4) Table 
//     Enter the no = 6
//     table of 6 is 
//     6 * 1 = 6
//     6 * 2 = 12
//     .
//     .
//     .
//     6 * 10 = 60


#include <stdio.h>
int main(){

    int i, no, mul;

    printf("Enter the no = ");
    scanf("%d",&no);

    for ( i = 1; i <=10; i++)
    {
        if (mul = no * i)
        {
            printf("%d * %d = %d\n", no, i, mul);
        } 
    }
    return 0;
}