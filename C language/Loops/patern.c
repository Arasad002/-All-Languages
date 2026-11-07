#include <stdio.h>

int main()
{
    int i, j;
    int no;

    printf("Enter the no = ");
    scanf("%d", &no);

    for ( i = 0; i <=no; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    

    return 0 ;

}

    

    