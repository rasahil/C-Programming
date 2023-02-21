// Demonstating switch....case 
// input any digit to print in alphabate 
// 1 -- One 2 ---Two ---3---Three
#include <stdio.h>
#include <conio.h>

void main()
{
	int dg;
	clrscr();
	printf("Enter any Digit :");
	scanf("%d",&dg);

	switch(dg)
	{
		case 1:
			//case '1':
		//	case '*':
			printf("One ");
		break;
		case 2:
			printf("Two ");
		break;
		case 3:
			printf("Three ");
		break;
		case 4:
			printf("Four ");
		break;
		case 5:
			printf("Five ");
		break;
		case 6:
			printf("Six ");
		break;
		case 7:
			printf("Seven ");
		break;
		case 8:
			printf("Eight ");
		break;
		case 9:
			printf("Nine ");
		break;
		default :
		printf("Zero");	
}

}
/*
Enter a Digit : 5
o/p Five 
*/

