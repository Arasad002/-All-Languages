#include <stdio.h>

int main()
{

    int no, sum = 0, i = 1;

    printf("Enter the no = ");
    scanf("%d", &no);

    do
    {
        sum += i;
        i++;
    } while (i <= no);
    
    printf("The sum Of N no %d = %d", no , sum);


return 0;
}
