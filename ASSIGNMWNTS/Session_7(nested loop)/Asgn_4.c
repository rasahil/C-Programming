// 4    A
//      A B
//      A B C
//      A B C D
//      A B C D E


#include<stdio.h>
#include<conio.h>


void main()
{
    char row , clm;
    for(row='A';row<='E';++row)
    {
        for(clm='A';clm<=row;clm++)  //lower side of the program
        {
            printf("%4c",clm);   //in we use to print clm statement here they print in uniform order of 1st variable
        }
        printf("\n");
    }
}