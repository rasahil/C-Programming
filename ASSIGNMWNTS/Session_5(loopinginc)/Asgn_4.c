// Read a no to find factorial  n!=nx n-1 x n-2 .....1

#include<stdio.h>
#include<conio.h>
void main()
{
    int num , fact=1;

    printf("Enter a number for factorial :- ");
    scanf("%d",&num);
    printf("----------------------------\n");
    // logic for factorial number
    while(num>0)
    {
        fact*=num; //fact=fact*num
       num--;  // decreament of numbers
    }
    printf(" Here is the factorial no :-%d\n",fact);

}
