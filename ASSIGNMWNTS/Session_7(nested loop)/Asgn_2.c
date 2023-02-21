// 1    A A A A A 
//      B B B B
//      C C C
//      D D 
//      E   
#include<stdio.h>
#include<conio.h>


void main()
{
    char row , clm;
    for(row='A';row<='E';++row)
    {
        for(clm='E';clm>=row;clm--) //upper side of the program
        {
            printf("%4c",row);//in we use to print row statement here they print in uniform order of 1st variable
        }
        printf("\n");
    }
}