#include<stdio.h>
int main(){

int a,b,c;

printf("Enter The a,b,c = ");
scanf("%d%d%d", &a, &b,&c);

if (a>b)
{
    if (a>c)
    {
        printf("A is largest ");
    }
    else
    {
        printf("C is Largest ");
    }
    
}
else
{
    if (b > c)  
    {
        printf("B is Largest");
    }
    else
    {
        printf("C is Largest .....");
    }
    
}




return 0;
}