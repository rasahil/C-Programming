// Read two nos to perform all possible arithmetics of user choice 
#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	char ch;
	// clrscr();
	printf("Enter any Two Nos :");
	scanf("%d%d",&a,&b);
	// Menu for Arithmetics 
	gotoxy(40,5);
	printf("Menu for arithmetics ");
	gotoxy(30,6);
	printf("1, + ,a ,A --Addition");
	gotoxy(30,7);
	printf("2, - ,s ,S --Substraction");
	gotoxy(30,8);
	printf("3, * ,m ,M --Multiplication");
	gotoxy(30,9);
	printf("4, / ,d ,D --Division");
	gotoxy(30,10);
	printf("5, % ,r ,R --Modulus");
	gotoxy(30,12);
	printf("Enter Your Choice :");
	// ch=getche();
	switch(ch)
	{
		case 1:
			case '+':
			case 'a":
			case 'A':
				gotoxy(30,15);
			printf("Result of addition :%d\n",a+b);
			break;
			case 2:
			case '-':
			case 's":
			case 'S':
				gotoxy(30,15);
			printf("Result of Substraction :%d\n",a-b);
			break;
			case 3:
			case '*':
			case 'm":
			case 'M':
				gotoxy(30,15);
			printf("Result of Multiplication :%d\n",a*b);
			break;
			case 4:
			case '/':
			case 'd":
			case 'D':
				gotoxy(30,15);
			printf("Result of Division :%d\n",a/b);
			break;
			case 5:
			case '%':
			case 'r":
			case 'R':
				gotoxy(30,15);
			printf("Result of Modulus:%d\n",a%b);
			break;
	default:
		printf("Wrong Choice :");
	}


}
