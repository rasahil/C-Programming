// Demonstating switch....case 
// input any digit to print in alphabate 
// 1 -- One 2 ---Two ---3---Three
#include <stdio.h>
#include <conio.h>

void main()
{
   int digit;
   printf("Enter a Digit Number :--");
   scanf("%d",&digit);

   switch(digit)
   {
      case 1:
         printf("ONE");
      break;
      case 2:
         printf("TWO");
      break;
      case 3:
        printf("THREE");
      break;
      case 4:
         printf("FOUR");
      break;
      case 5:
         printf("FIVE");
      break;
      case 6:
         printf("SIX");
      break;
      case 7:
         printf("SEVEN");
      break;
      case 8:
         printf("EIGHT");
      break;
      case 9:
         printf("NINE");
      break;
   default :
   printf("zero");
    }
}