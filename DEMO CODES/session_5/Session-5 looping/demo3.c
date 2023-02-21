// Read nos till their summation remains <=100 and count total nos entered

#include<stdio.h>
#include<conio.h>
void main()
{
    int num, sum=0 ,cnt=0;
    do
    {
        printf("Enter a  number :-");
        scanf("%d",&num);
        sum=sum+num; //sum+=num; ////   
        cnt++;  // he is for looping statements
    }
    while(num<=100);
    {
    
    printf(" Summation of num is %d \n",sum);
    printf(" total count for enterd numbers :-%d\n",cnt);
}
}