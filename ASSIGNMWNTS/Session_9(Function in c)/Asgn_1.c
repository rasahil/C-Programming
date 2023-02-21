// 1. read a no and find 10 multiples of it .
// 	read a no -5 
// 	5 ,10,15....50

#include<stdio.h>
#include<conio.h>

void table(int);

void main()
{
    int num;
    printf("Enter a number :-");
    scanf("%d",&num);
    table(num);
}

void table(int(a))
{
    int i;
    printf("====TABLE FOR %d IS HERE =======\n",a);
    for(i=1;i<=10;i++)
    {
        printf(" %d  *  %d  =  %d \n",a,i,(a*i));
    }
}