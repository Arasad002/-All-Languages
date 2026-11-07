#include <stdio.h>

int main()
{
    int size, i;

    printf("Enter the size = ");
    scanf("%d", &size);

    int ar[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the array = ");
        scanf("%d", &ar[i]);
    }

    int max = ar[0], min = ar[0];

    for (i = 0; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}
