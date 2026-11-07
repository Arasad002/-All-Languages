#include<stdio.h>
int main()
{

    int date, month, year;

    printf("Enter The Your Date Of birth \n");
    printf("Enter the Date = ");
    scanf("%d", &date);
    printf("Enter The month = ");
    scanf("%d", &month);
    printf("Enter the Year = ");
    scanf("%d", &year);


    date = date - 18 ;
    month = 07 - month;
    year = 2025 - year;

    printf("year = %d\n",year);
    printf("month = %d\n", month);
    printf("Days = %d\n",date);

    return 0;
}