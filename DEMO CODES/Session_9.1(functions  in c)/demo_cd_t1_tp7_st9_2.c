// Function to check given no is even or odd
#include <stdio.h>
#include<conio.h>

int checkeven(int);

void main()
{
	int n;
	clrscr();
	printf("Enter a no :");
	scanf("%d",&n);
	if(checkeven(n))
	{
		printf("%d is even no ",n);
	}
	else
	{
		printf("%d is not even no ",n);
	}


}

// Function definition 

int checkeven(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}


