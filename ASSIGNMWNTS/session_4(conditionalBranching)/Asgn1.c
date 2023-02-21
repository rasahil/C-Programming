// Read Person name ,age to check voting Eligibility
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10];
    int age;
    printf(" Enter Person Name :-");
    scanf("%s",&name);
    printf("Enter Person's Age :-");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%s s Age is %d he is ELIGIBLE for vote ",name,age);

    }
    else
    printf("%s s Age is %d he is NOT ELIGIBLE for vote ",name,age);
    // printf("\t\nTHANK YOU ");
}