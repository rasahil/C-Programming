// 1. Read a No and check prime or not.
// prime no - a no which is divisible by 1 & itself only.
// read n;
// // Wrong Logic
// if(n%1==0 && n%n==0)
// {
// print prime
// }
// else
// {
// print not prime
// }
// A no which is divisible by 1 & itself only means not divisible by any other nos than 1 & itself
// // Correct Logic
// read n ;
// // Set a loop from 2 to n-1
// for(i=2;i<n;i++)
// {
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int num ,i=2,flag=0;
    printf("Enter a Number :-");
    scanf("%d",&num);
    
    // pnum=num;
    while(i<num)
    {
       if(num%i==0 )
        {
        flag++;
        break;
        }
        i++;
    }
    
    if(flag==0)
       {
        printf("The no.:-%d is PRIME number",num);
       }
    else
       {
        printf("The no. :-%d is NOT PRIME number",num);
       }
}