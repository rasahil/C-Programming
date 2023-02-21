// Array 1
// Declare an array of defined subscript , insert elements in it

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    int suffer[10];  //array of size 220
    int i;  //array of counter

    // logic for inserting data in an array
    for(i=0;i<10;i++)
    {
        printf(" Enter data for suffer [%d] :- ",i);
        scanf("%d",&suffer[i]);
    }
    //logic for Displaying array Elements, Memory Positions
    printf("Array Sub\tElement \t Memory Address \n");
    for(i=0;i<10;i++)
    {
        printf(" Suffer[%d]\t%d\t%u\n",i,suffer[i],&suffer[i]);
    }

}