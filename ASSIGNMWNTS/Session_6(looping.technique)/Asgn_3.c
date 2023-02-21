// 3. Read a no to check armstrong or not
// Armstrong no - sum of cube of all the digits is equal to a no
// 153 - 1^3+5^3+3^3 - 1 + 125 +27

#include<stdio.h>
#include<conio.h>

void main()
{
    unsigned int num,armnum=0,remainder,temp;
    printf(" Enter a number :-");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        armnum+=(remainder*remainder*remainder);
        temp/=10;
    }
    if(armnum==num)
    {
        printf(" %d is ARMSTRONG number ",num);
    }
    else
    {
        printf(" %d is NOT ARMSTRONG number ",num);
    }
}