#include <stdio.h>

int main()
{

    int no, sum = 0, i;

    printf("Enter the no = ");
    scanf("%d", &no);

    for ( i = 1; i <= no; i++)
    {
        sum += i;
    }
    printf("The sum Of N no %d = %d", no , sum);

    return 0;

}