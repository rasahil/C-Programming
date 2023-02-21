// 3    A
//      B B
//      C C C
//      D D D D
//      E E E E E

#include<stdio.h>
#include<conio.h>


void main()
{
    char row , clm;
    for(row='A';row<='E';++row)  //lower side of the program
    {
        for(clm='A';clm<=row;clm++)  //in lower part
        {
            printf("%4c",row);//in we use to print row statement here they print in uniform order of 1st variable
        }
        printf("\n");
    }
}