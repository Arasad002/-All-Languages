#include<stdio.h>
int main(){

    int a, b, sum, sub, mul, div;

    printf("Enter the A = ");
    scanf("%d",&a);
    printf("Enter the B = ");
    scanf("%d",&b);

    printf("Option in (1 to 4)\n");
    printf("1.Sum  2.Sub  3.Mul  4.Div \n");
    scanf("%d", &sum, &sub, &mul, &div);

    switch (sum)
    {
    case 1:
        sum = a + b;
        printf("Sum = %d\n", sum);
        break;
    
    case 2:
        sub = a - b;
        printf("Sub = %d\n", sub);
        break;
        
    case 3:
        mul = a * b;
        printf("Mul = %d\n", mul);
        break;

    case 4:
        div = a / b;
        printf("Div = %d\n", div);
        break;
        
        default:
        printf("Enter The Valid Option in (1 to 4)");
        break;
    }



    return 0;
}