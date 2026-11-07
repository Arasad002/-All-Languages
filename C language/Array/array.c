#include <stdio.h>
int main()
{
    // int array[3] = {55,56,24};

    // for (int i = 0; i <3; i++)
    // {
    //     printf("All Array = %d\n", array[i]);
    // }
    

    int size;

    printf("Enter the Size = ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Array = ");
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i <size; i++)
    {
        printf("All array = %d\n", array[i]);
    }
    


    return 0;
}