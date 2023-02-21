// Generate Fibbonoci series for n terms 
#include<stdio.h>
#include<conio.h>

void main()
{
    int num1=0,num2=1, rlt,num,i;
    printf(" how many fabbonoci term required :-");
    scanf("%d",&num);
    //logic for generating fibbonoci series
    printf("%4d %4d",num1,num2);
    // for(i=3;i<num;i++)
    // {
    //     rlt=num1+num2;
    //     printf("%4d",rlt);
    //     num1=num2;
    //     num2=rlt;
    // }
    while(1)
    {
        rlt=num1+num2;
        printf("%3d",rlt);
        num1=num2;
        num2=rlt;
        if(i=num-1)
        {
            break;
        }
        i=2+i;
    }
   

}