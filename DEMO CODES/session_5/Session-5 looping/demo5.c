// Read a no and find its digital sum 
// i.p 1234  o.p 10 
#include<conio.h>
#include<stdio.h>

void main()
{
    int num ,dgsum;
    printf(" Enter a number :-");
    scanf("%d",&num);
    // logic to finf digital sum
    while(num>0)
    {
    dgsum=dgsum+(num%10);
    num=num/10;
    }
    printf("here is the Digital Sum :%d\n",dgsum);

}