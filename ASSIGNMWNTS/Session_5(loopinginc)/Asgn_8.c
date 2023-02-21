// 8. Read  a no to print reverse 
#include<stdio.h>
#include<conio.h>
void main()
{
    int num ,i,a,b=0,temp;
    printf(" Enter a number :- ");      
    scanf("%d",&num); 
    temp=num;
    // Logic for printing reverse of a no 
    while(num>0)
    {
        // num=num%10; //  123=3,2,1
        printf("%d",num%10);  //here % is gave last digit of number
        // a=(b=(b*10)+num); //b=3,32,321

        num/=10;  //and this is divided the number bby 10 and find remaining nums
        i++;
    }
    // a=num;
    // printf("%d is value of a\n",a) ; 
    // //    f(temp==b)
    // {
    // printf("%d value of b",b);
    // }
        
        
    
}