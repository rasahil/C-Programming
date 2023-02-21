// 4. Read a no and radix of a no to find power 
// 	base -2
// 	radix -5	
// 		power(2,5) 

// 	power - 32


#include<stdio.h>
#include<conio.h>


void radixnum();

void main()
{
    int base,radx;
    printf("Enter a number  for base and radix:- ");
    scanf("%d\t%d",&base,&radx);
    radixnum(base,radx);
    
}

void radixnum(int base,int radx)
{
    float pwr=1.0;

   while(radx>0)
   {
    pwr*=base;
    radx--; 
   
    // break;
   }
    printf(" power of the no is %.2f",pwr);
    
}