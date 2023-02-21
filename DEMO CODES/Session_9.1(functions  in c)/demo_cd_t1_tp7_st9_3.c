// Function to print 10 multiples of a given no 
// 5 -- 5,10,15,20....50
#include <stdio.h>
#include<conio.h>

void multi(int);


void main()
{
int n;
printf("Enter a No :");
scanf("%d",&n);

multi(n); // call to void function 


}

// Function definition 

void multi(int n)
{
	int i=1;
	for(i=1;i<=10;i++)
		printf("%4d x %4d = %4d\n",n,i,(n*i));

}

