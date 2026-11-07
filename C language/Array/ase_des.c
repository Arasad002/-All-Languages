#include <stdio.h>

int main()
{

    int size,arr[size], i, j, temp;

    printf("Enter the size = ");
    scanf("%d", &size);


    for ( i = 0; i < size; i++)
    {
        printf("Enter the Array = ");
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;       
            }
            
        }
    
    }
    printf("\n Ascending order : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;       
            }
            
        }
    
    }

    printf("\n Descending order : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }

return 0;
}
