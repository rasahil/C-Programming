// Price Discount
// <1500 0
// >=1500 <4500 2%
// >=4000 <6000 4%
// >=6000 8%
#include<stdio.h>
#include<conio.h>
void main()
{
    
    float price,dis1,dis2,dis3;
    printf("Enter price :-");
    scanf("%d",&price);
    
    dis1=price*.02;
    dis2=price*.04;
    dis3=price*.08;
    
    if(price<1500)
    {
        printf("there is no DISCOUNT for you ");
        printf("%d",price);
    }
    if(price>=1500 && price<4000)
    {
        printf(" you got '2%' discount =>%.2f",dis1);
    }
    if(price>=4000 && price<6000)
    {
        printf( "you got '4%' discount =>%.2f",dis2);
    }
    if(price>=6000)
    {
        printf("you got '8%' discount =>%.2f",dis3);
    }
}