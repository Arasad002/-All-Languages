#include <stdio.h>
int main(){

    int no, i, sum = 0, sum1 = 0,sum2;

    printf("Enter the no = ");
    scanf("%d",&no);

    printf("\nEven : ");

    for ( i = 1; i <=no; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ,",i);
            sum += i; 
        }
        
    }
    printf("\n\nSum Of Even no : %d",sum);

    printf("\n\n Odd : ");

    for ( i = 1; i <=no; i++)
    {
        if (i % 2  !=0)
        {
            printf("%d ,",i);
            sum1 += i;
        }
        
    }
    printf("\nSum of Odd : %d\n", sum1);



    sum2 = sum + sum1;

    printf(" \n Sum of Even and odd no : %d\n",sum2);

    return 0;
}