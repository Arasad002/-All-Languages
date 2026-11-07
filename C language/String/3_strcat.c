// 3) strcat
//     Enter the name = arsad
//     Enter tha surname = piprani 
//     ans = arsad piprani  


#include<stdio.h>
#include <string.h>

int main()
{

    char name[100], surname[100];
    
    printf("Enter the name = ");
    scanf("%[^\n]", &name);
    printf("Enter the surname = ");
    scanf("%s", &surname);


    strcat (name , surname);

    printf("Full name = %s\n", name);

    return 0;
}