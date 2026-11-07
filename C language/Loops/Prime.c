// 6)  prime no 

//     Enter the no = 11
//         this is prime 
//     enter the no = 24
//         this is not prime no    

#include <stdio.h>
int main(){

    int i, no, p = 0;

    printf("Enter the No = ");
    scanf("%d", &no);


    for ( i = 1; i <=no; i++)
    {
        if (no % i ==0)
        {
            p++;
        }
        
    }
    if (p == 2)
    {
        printf("This is Prime No ");
    }
    else
    {
        printf("This is not prime No ");
    }
    
    
    return 0;
}