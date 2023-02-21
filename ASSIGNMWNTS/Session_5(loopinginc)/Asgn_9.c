
// 9. Read a no to find digital sum (i/p 1234 o/p 10)
#include<stdio.h>
#include<conio.h>

void main()
{
    int num ,dgsum=0;
    printf(" Enter a number :- ");
    scanf("%d",&num);
    while(num>0)
    {
        dgsum=dgsum+(num%10);   //dgsum+=(num%10)
        num/=10;
    }
    
    printf(" DIgital sum of entered number :- %d",dgsum);

}