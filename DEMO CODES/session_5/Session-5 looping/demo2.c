// Read a no to find factorial 
// n != n x n-1 x n-2 x n-3....1
#include<stdio.h>
#include<conio.h>

void main()
{
    int num ,fact=1;
    printf(" Enter a no. :-");
    scanf("%d",&num);
    // logic for factorial 
    while(num>0)
    {
        fact*=num; //fact=fact*num
        num--;
    }
    printf(" Factorial for number is %d\n",fact);

}