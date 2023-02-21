// 4. Read a no and radix of a no to find power 
// 	base -2
// 	radix -5	
// 		power(2,5) 

// 	power - 32

#include<stdio.h>
#include<conio.h>

void f1();

void power();
void main()
{
    
    f1();
}


void f1()
{
    int bs,rdx ;
    printf(" Enter no. for base and radix :- ");
    scanf("%d\t%d",&bs,&rdx);
    power(bs,rdx);
}

void power (int bs , int rdx)
{
    
    float pwr=1.0;
    for(rdx=rdx;rdx>0;rdx--)
    {
        pwr*=bs;
        
    
    }
    printf(" power of the no. is %.2f",pwr);
}
