// 5. Read person age to display following message as per age
// < 18 --Jr. Kid
// >=18 <25 College going
// >=25 <40 Career oriented
// >=40 <60 middle age
// >=60 Old age

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    printf(" Enter your AGE :-");
    scanf("%d",&age);

    if(age<18)
        printf(" JUNIOR KID \n");
    else if(age>=18 && age<25)
        printf("COLLEGE GOING  \n");
    else if(age>=25 && age<40)
        printf("CAREER ORIENTED \n");
    else if(age>=40 && age<60)
        printf("MIDDLE AGE \n");
    else
        printf("OLD AGE");
}