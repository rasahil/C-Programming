// Read a no to check armstrong or not 
#include<stdio.h>
#include<conio.h>

void main()
{
    int num, arm,a,temp;
    printf("Enter a number here :-");
    scanf("%d",&num);

    temp=num;
    while(num>0)
    {
        a=num%10;
        arm+=(a*a*a);

        num/=10;
    }
        // num++;
    if(arm==temp)
    {
        printf("the number is Armstrong :-%d\n",arm);
    }
    else
    {
        printf(" the number is not Armstrong :-%d\n",arm);
    }


}