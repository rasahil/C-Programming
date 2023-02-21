// Print your name for 20 times on the screen 
#include <stdio.h>
#include<conio.h>

void printname(char []);

void main()
{
	char nm[10];
	printf("Enter your name :");
	scanf("%s",&nm);
	printname(nm);

}


// function definition

void printname(char x[])
{
	int i;
	for(i=1;i<=20;i++)
		printf("%d\t%s\n",i,x);

}