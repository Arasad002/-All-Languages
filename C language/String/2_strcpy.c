// 2) strcpy
//     Enter the name = arsad
//         surname = arsad

//  name to converted in surname        




#include<stdio.h>
#include <string.h>

int main()
{

    char name[100], surname[100];
    
    printf("Enter the name = ");
    scanf("%[^\n]", &name);

    strcpy (surname , name);

    printf("Surname = %s\n", surname);

    return 0;
}