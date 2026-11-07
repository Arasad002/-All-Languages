// calculate income tax paid by an employee  to the goverment as per the slabs mentioned below: 

//     income slab         tax 

//     2.5 - 5.0l           5%
//     5.0l - 10.0l        20%
//     above 10.0l         30%

#include <stdio.h>

int main()
{

    int income;
    float tax = 0;

    printf("Enter the Income = ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }

    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000);
        +0.2 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000);
        tax += 0.2 * (1000000 - 500000);
        tax += 0.3 * (income - 1000000);
    }

    printf("The total Tax You need to pay is %.2f ", tax);

    return 0;
}
