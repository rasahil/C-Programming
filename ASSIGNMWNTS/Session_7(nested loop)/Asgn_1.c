// 1    A B C D E 
//      A B C D
//      A B C 
//      A B
//      A 

#include<stdio.h>
#include<conio.h>

void main()
{
    char row,clm;
    // char a='A,B,C,D,E,F,G,H,I,J,K,L,M,N,O';
    for(row='E';row>='A';row--)  
    {
        for(clm='A';clm<=row;clm++) //upper side of the program3
        {
        printf("%4c",clm);//in we use to print clm statement here they print in uniform order of 1st variable
        }
        printf("\n");
    }
}