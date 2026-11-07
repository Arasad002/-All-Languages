#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter tha size = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 1; i <= size; i++)
    {
        printf("Enter the Array = ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array : %d", sum);

    return 0;
}