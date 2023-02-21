// Read nos till their summation remains less than or equal to 100 . Count total nos entered.
#include<stdio.h>
#include<conio.h>

void main()
{
    int num ,sum=0 ,cnt=0;

    do
    {
        printf(" Enter a number :- ");
        scanf("%d",&num);
        sum+=num; //sum=sum+num
        cnt++;  //increament of number
    }
   
    while(num<=100 && sum<=100);  // num is less than equal to 100  & sum is less than equal to 100
    {
        printf("Summation of num is  :-%d \n",sum); 
        printf("total count of enter num is :- %d \n",cnt);
        
    }
}