/*
Enter the name = Kanak 
    Reverse name = kanak
    This palidrom name  
Enter the name = mira
    Reverse name = arim
    This is not palidrom    
*/

#include <stdio.h>
#include<string.h>

int main ()
{
    char name[100], rev[100];

        printf("Enter the name = ");
        scanf("%s", &name);

        printf("Name = %s\n", name);

        int len = strlen(name);
        int h = len - 1;
        int i;

        for ( i = 0; i < len; i++)
        {
            rev[h--] = name[i];
        }
        
        rev[i] = '\0';

        printf("Reverse name = %s\n", rev);

        if (strcmp(name,rev) == 0)
        {
            printf("This name is palidrom ");
        }
        else
        {
            printf("This is not palidrom ");
        }
        
    return 0;
}