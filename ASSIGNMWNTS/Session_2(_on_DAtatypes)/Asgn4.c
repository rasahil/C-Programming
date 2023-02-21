// 4. Read a temperature in centigrade to convert it into farhenite.
#include<stdio.h>
#include<conio.h>
void main()
{
    int temp, frnt;
    printf("Enter value for Temperature :-");
    scanf("%d",&temp);
    // compute
    frnt=(temp* 9/5) + 32 ;

    printf("Enterd Temperature is :- %d C\n",temp);
    printf("Converted temp. into FARHENITE is :-%d fd",frnt);

}