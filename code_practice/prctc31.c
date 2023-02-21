// democode3.1.c
#include<stdio.h>
#include<conio.h>

void main()
{
    char nm[10];
    int age;

    printf("Eneter your name here :");
    scanf("%s",&nm);
    printf("Enter an age \n");
    scanf("%d",&age);
    //cond. exppre. for checkingvoting eligibility
    if(age>18)
    {
        printf(" %s is eligible age :%d Year's \n",nm,age);

    }
    else
    {
        printf("%s is not eligible is vote age is :%d\n",nm,age);

    }

}
