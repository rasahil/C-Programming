// Use following table to print remarks on age
// Age remark
// <18 Jr. Kid
// >=18 <25 Young one
// >=25 <40 career age
// >=40 <60 mid age
// >=60 old age
#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    printf(" enter your age :-");
    scanf("%d",&age);
    printf("=========================\n");
    if(age<18)
    {
        printf(" JUNIOR KID ");
    }
    else if(age>=18 && age<25)
    {
        printf("YOUNG ONE");
    }
    else if(age>=25 && age<40)
    {
        printf("CAREER AGE");
    }
    else if(age >=40 && age<60)
    {
        printf("MID AGE");
    }
    else
    {
        printf("OLD AGE");
    }
    printf("\n====================================================\n");
    printf("\nage is <18                   => Jr. Kid");
    printf("\nage is between >=18 <25      =>Young one");
    printf("\nage is between >=25 <40      =>career age");
    printf("\nage is between >=40 <60      => mid age");
    printf("\nage is between  >=60         =>old age");
}