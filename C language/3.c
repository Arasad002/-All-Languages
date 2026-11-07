#include<stdio.h>
int main()
{


    int year,days,month, rdays, rmonth;
    printf("Enter the Days = ");
    scanf("%d", &days);

    year = days / 365;
    month = year * 12;
    rdays = days % 365;
    rmonth= rdays / 30;

    printf("Year = %d\n", year);
    printf("Month = %d\n",month);
    printf("Reminder days = %d\n",rdays);
    printf("Reminder Month = %d\n", rmonth);


    return 0;
}
