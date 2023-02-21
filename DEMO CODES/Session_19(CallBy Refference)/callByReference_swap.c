
#include<stdio.h>
#include<conio.h>

void swap(int * , int *);

void main()
{
    int a=10,b=20;

    printf("=========================================\n");
    printf("\tValue of A Before Swap : %d\n",a);
    printf("\tValue of B Before Swap : %d\n",b);

    swap(&a,&b);
    printf("=========================================\n");
    printf("\tValue of A After Swap : %d\n",a);
    printf("\tValue of B After Swap : %d\n",b);
    printf("=========================================\n");

}

void swap(int *x, int *y)
{
    int temp;

    temp  = *x    ;
    *x    = *y    ;
    *y    = temp ;

}