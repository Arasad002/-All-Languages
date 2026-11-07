#include <stdio.h>
int main ()
{
    int size;

    printf("Enter the size = ");
    scanf("%d", &size);

    char c[size][100];

    for (int i = 0; i <size; i++)
    {
        printf("Enter the Name = ");
        scanf("%s", &c[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("Name : %s\n", c[i]);
    }
    


    return 0;
}