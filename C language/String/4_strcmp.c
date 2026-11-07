// 4) strcmp
//     Enter the name = arsad
//     enter the name = arsad
//         compare = 0 (True)

//     enter the name = arsad
//     Enter the surname = piprani
//         compare = 1 (false)


#include<stdio.h>
#include <string.h>

int main()
{

    char name[100], surname[100];
    
    printf("Enter the name = ");
    scanf("%[^\n]", &name);
    printf("Enter the surname = ");
    scanf("%s", &surname);


    strcmp(name , surname);

    printf("Full name = %s\n", name);

    printf("Compare = %d\n", strcmp(name, surname));

    return 0;
}