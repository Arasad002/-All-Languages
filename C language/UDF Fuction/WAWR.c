#include <stdio.h>

// 1. WAWR

int sum1(int size)
{
    int sum = 0;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Array = ");
        scanf("%d", &arr[i]);
        sum += arr[i];

    }
    
    return sum;
}

// 2. NAWR

void sum2(int size)
{
    int sum = 0;

    // printf("Enter the size = ");
    // scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the array = ");
        scanf("%d", &arr[i]);

        sum += arr[i];
    }
    printf("Sum of array = %d", sum);
}
// 3.NANR

void sum3()
{
    int size, sum = 0;

    printf("Enter the size = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i <size; i++)
    {
        printf("Enter the array = ");
        scanf("%d", &arr[i]);

        sum += arr[i];
    }
    printf("sum of array = %d", sum);
}

int sum1(int size)
{
    int sum = 0;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Array = ");
        scanf("%d", &arr[i]);
        sum += arr[i];

    }
    
    return sum;
}
int main ()
{
    printf("Sum of array %d\n",sum1(5));

    sum2(2);
    sum3();

    return 0;
}