#include <stdio.h>
int main(){

    int a, b, sum,sub,mul,mod;
    float div;


    printf("Enter The A = ");
    scanf("%d",&a);
    printf("Enter The B = ");
    scanf("%d",&b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum = %d\n",sum);
    printf("Sub = %d\n",sub);
    printf("Mul = %d\n",mul);
    printf("Div = %f\n",div);
    printf("Mod = %d\n",mod);




    return 0;
}