// Demonstrating if ....ladder 
// read percentage and determine grade 
// <50 --no, >=50 <65 --C ,>=65 <75 --B,>=75 <85 A, A+
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10];
    int prcnt;
    printf(" Enter your Name :-");
    scanf("%s",name);
    printf(" Enter your PERCENTAGE HERE :-");
    scanf("%d",&prcnt);
    if(prcnt<50)
    {
        printf(" NEED TO LEARN ");
    }
    else if(prcnt>=50 && prcnt<65) /*(50<=prcnt<65)*/
    {
        printf("GRADE C ");
    }
    else if(prcnt>=65 && prcnt<75)
    {
        printf("GRADE B ");
    }
    else if(75<=prcnt && prcnt<85)
    {
        printf("GRADE A ");
    }
    else
    
        printf("A+");
    
}