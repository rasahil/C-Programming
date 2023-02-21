// 2. Read a no to find their digital sum 
// 	i.p- 1234
// 	o.p - 10

#include<stdio.h>
#include<conio.h>

void f1();
void dgsum(int);

void main()
{
    f1();
}

void f1()
{
    int num;
    printf(" Enter a number:-");
    scanf("%d",&num);
    dgsum(num);
}

void dgsum(int num)
{
    int sumdg=0;
    while(num>0)
    {
        sumdg+=(num%10);
        num/=10;
    }
    // i++;

printf(" the sum of digits is :-%d ",sumdg);

}