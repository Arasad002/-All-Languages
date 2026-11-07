

// 3)  base and power 
//     Enter the base = 3
//     Enter the power = 2
//                 ans = 9


#include <stdio.h>
int main(){

    int i, base, power, ans = 1;

    printf("Enter the Base = ");
    scanf("%d" , &base);
    printf("Enter the Power = ");
    scanf("%d", &power);

    for ( i = 1; i <=power; i++)
    {
        ans *= base;
    }

    printf("Ans = %d\n", ans);
    
    return 0;
}

