//  Read a no to check prime or not
#include<stdio.h>
#include<conio.h>

void main()
{
    int num , i, value=0;

    printf("Enter a number :-");
    scanf("%d",&num);

    for(i=2;i<num;i++)  //value is divisible by 1 and itself
    {
        if(num%i==0)   //this formula checks that the num we get is equal to zero if the cndsn is true the value become 1.
            value=1; //1 means num is any one.

    }
    if(value==0)  //this value is zero means the num we want is only divisible by 1 and itself.
    {
        printf("Entered value is prime number :-%d",num);
    }
    else
    {
        printf("Entered value is not prime number :-%d",num);
    }
    


}