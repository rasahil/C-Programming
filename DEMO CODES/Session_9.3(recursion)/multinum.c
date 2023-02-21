// Find 10 multiples of a given no
#include<stdio.h>
#include<conio.h>

void multi(int , int);

void main ()
{
    int num ;
    printf(" Enter a number:-");
    scanf("%d",&num);
    multi(num,10);  // compute 10 multiiple of number


}

void multi(int num ,int m)
{
    if(m==0)
    {
        return ;
    }
    printf("%d\n",num*(11-m));

    multi(num,--m);
return ;
}