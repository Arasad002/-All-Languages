// 1)  strlen
//     Enter the name = Arsad 
//         lenth of name = 5



#include<stdio.h>
#include <string.h>

int main()
{

    char name[100];
    
    printf("Enter the name = ");
    scanf("%[^\n]", &name);


    int len = strlen(name);

    printf("Length of string = %d\n", len);


    return 0;
}