#include <stdio.h>
int main(){

    // int year, months, tdays;

    // printf("Enter the year = ");
    // scanf("%d", &year);

    // months = year * 12;
    // tdays  = months * 30;

    // printf("Months = %d\n",months);
    // printf("Totad Days = %d\n",tdays);

int a=10;
int *p = &a;
int **pp = &p;
int b = **pp + 2;

printf("%d",b);




    return 0;
}