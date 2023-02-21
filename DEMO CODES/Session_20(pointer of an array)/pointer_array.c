// Pointers to an Array 
#include<stdio.h>
#include<conio.h>

void main()
{
    int array[]={10,20,30,40,50,60,70,80,90,100},i;
    int *B;

    B=array;    //By defualt pointer variable points to base address
    printf("===============================================\n");
    printf("\tArray Sub\t  Element \n");

    for(i=0;i<10;i++)
    {
        printf("\tarray[%d]\t\t%d\n",i,*(B+i));
    }
    printf("===============================================\n");
    printf("\tTraversing an array in the reverse order \n");
    printf("===============================================\n");
    printf("\tArray Sub \t  Element \n");
    for(i=9;i>=0;i--)
    {
        printf("\tarray[%d]\t\t%d\n",i,*(B+i));
    }


    // while(*B)
    // {
    //     printf("%d\n",*(B++));
    // }
    // B=array;
    // printf("Traversing reverse\n");
    // for(i=9;i>=0;i--)
    // {
    //     printf("arar[%d]\t\t%d\n",i,*(B+i));
    // }
}