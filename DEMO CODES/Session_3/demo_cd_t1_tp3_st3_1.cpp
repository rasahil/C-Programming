// Read an age and check voting ellibility 
#include <stdio.h>
#include <conio.h>
void main()
{
	char nm[10];
	int age;
	
	printf("Enter Your Name :");
	scanf("%s",&nm);
	printf("Enter an Age \n");
	scanf("%d",&age);
	// Conditial Expression for checking voting elligibility
	if(age>18)
	{
		// then block
		printf("%s is elligible age :%d Year's\n",nm,age);
	}
	else
	{
	printf("%s is not elligible is vote age :%d\n",nm,age);
	}
	
}
// Output 
// Enter Name : xx
// Enter Age : xx
