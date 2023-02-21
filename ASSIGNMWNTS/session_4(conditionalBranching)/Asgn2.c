// Read Student Name ,Percentage and check for eligibility for interview
// per>=65 is eligible else print "waiting"
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10];
    float prcnt;
    
    printf(" Enter students name :-");
    scanf("%s",&name);
    printf("Enter your percentage :-");
    scanf("%f",&prcnt);
    if(prcnt>=65)
    {
        printf("Mr./Miss.%s is ELIGIBLE for INTERVIEW ",name);
    
    }
    else
    {
        printf(" Mr./Miss.%s you are in waiting ",name);
    }

}
