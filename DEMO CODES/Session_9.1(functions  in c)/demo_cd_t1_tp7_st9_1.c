// Defining user defined functions 
// Factorial of a no : n!=n x n-1 x n-2....1
#include <stdio.h>
#include<conio.h>

// function prototype
int facto(int);

void main()
{
	int n;
	
	printf("Enter a No :");
	scanf("%d",&n);
	printf("No is :%d \tFactorial :%d\n",n,facto(n));
	
}


// function body
int facto(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;
	}
	return f;
}
