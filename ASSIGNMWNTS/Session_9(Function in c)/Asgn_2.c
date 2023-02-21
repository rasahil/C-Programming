// 2. Read a no to find their digital sum 
// 	i.p- 1234
// 	o.p - 10


#include<stdio.h>
#include<conio.h>


void dgsm(int);

void main()
{
    int num;
    printf("Enter a number :-");
    scanf("%d",&num);
    dgsm(num);
}

void dgsm(int (n))
{
    int dgsum=0;
    while(n>0)
    {
        dgsum=dgsum+(n%10);
        n/=10;
        // i++;
        // if(n==n)
        // {
        //     break;
        // }

    }
    printf(" DIGITAL SUM OF THESE NUMBERS IS:-%d\n",dgsum);
}