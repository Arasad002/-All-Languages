

struct marksheet
{
    int rollno, total,Hindi, Guj, Maths, Eng, Sci;
    char name[100];
    float per;
};
#include <stdio.h>
int mark()
{
    struct marksheet a;

    printf("Enter the name = ");
    scanf("%s", &a.name);
    printf("Enter the Roll no = ");
    scanf("%d", &a.rollno);
    printf("Enter the Hindi marks = ");
    scanf("%d", &a.Hindi);
    printf("Enter the Guj marks = ");
    scanf("%d", &a.Guj);
    printf("Enter the Maths marks = ");
    scanf("%d", &a.Maths);
    printf("Enter the Eng marks = ");
    scanf("%d", &a.Eng);
    printf("Enter the Sci marks = ");
    scanf("%d", &a.Sci);

    a.total = a.Hindi + a.Guj + a.Maths + a.Eng + a.Sci;
    a.per = a.total / 5;

    printf("My name is  %s\n",a.name);
    printf("My Roll No is  %d\n", a.rollno);
    printf("Tottal is %d\n", a.total);
    printf("Percentage is %f\n", a.per);

    
    if(a.Guj <33 || a.Hindi < 33 || a.Maths <33 || a.Eng < 33 || a.Sci <33 )
    {
        printf("Reuslt is fail \n");
    }
    
    else if (a.per > 90)
    {
        printf("Grade A\n");
        printf("Result is pass");
    }
    else if (a.per > 80)
    {
        printf("Grade B\n");
        printf("Result is pass");
    }
    else if (a.per > 70)
    {
        printf("Grade C\n");
        printf("Result is pass");
    }
    else if (a.per > 60)
    {
        printf("Grade D\n");
        printf("Result is pass");
    }
    else if (a.per > 50)
    {
        printf("Grade E\n");
        printf("Result is pass");
    }
    else if (a.per <50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Result is fail\n");
    }
}
int main()
{

    mark();
   // mark();
    



return 0;
}
