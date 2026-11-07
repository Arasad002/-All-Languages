// 2) Factorial no 
//     Enter the no = 5
//         logic : 1*2*3*4*5 = 120
//     The factorial no of 5 is : 120         


#include <stdio.h>
int main(){

    int i, no,mul = 1;

    printf("Enter the No = ");
    scanf("%d", &no);

    for ( i = 1; i <=no; i++)
    {
        mul *= i;
    }  
     
    printf("Factorial No of %d is = %d\n ", no , mul);
    


    return 0;

}