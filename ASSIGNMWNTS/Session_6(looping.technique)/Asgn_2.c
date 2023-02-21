// 2. Generate a Fibbonoci series for n terms
// - Addition of previous two terms is equal to current term
// 0 1 1 2 3 5 8 13...

#include<stdio.h>
#include<conio.h>

void main()
{
    int num1=0,num2=1,num,i,fnum;
    printf(" Enter number :-");
    scanf("%d",&num);

    printf("%4d%4d",num1,num2);
    for(i=2;i<num;i++)
    {
        fnum=num1+num2;

        num1=num2;
        num2=fnum;

    printf("%4d ",fnum);
    }
    

}