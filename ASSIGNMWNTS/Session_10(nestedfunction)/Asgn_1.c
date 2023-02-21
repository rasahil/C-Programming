// 1. read a no and find 10 multiples of it .
// 	read a no -5 
// 	5 ,10,15....50
#include<stdio.h>
#include<conio.h>
void f1();
void table (int);

void main()
{

    f1();
}


void f1()
{
    int num;
    printf(" Enter a number :-");
    scanf("%d",&num);
    table(num);
}

void table (int (x))
{
    int i=1;
    while(i<=10)
    {
        printf(" %d  *  %d  =  %d \n",x,i,(x*i));
    i++;
    }
    
}