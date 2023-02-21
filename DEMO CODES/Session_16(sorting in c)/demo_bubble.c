/*C program for bubble sort: C programming code for bubble sort to sort numbers or arrange them in ascending order. You can modify it to print numbers in descending order.

Bubble sort algorithm implementation in C */
/* Bubble sort code */
// pro for bubble sort of acsending order

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100],m,i,j;
    int swap;

    printf("Enter a no value :\n");
    scanf("%d",&m);

    printf(" Enter %d integer :-\n",m);

    for(i=0;i<m;i++)     //for looping the m times
    {
        scanf("%d",&array[i]);      //taking value from user
    }
    for(i=0;i<(m-1);i++)       //
    {
        for(j=0;j<m-i-1;j++)
        {
            if(array[j] > array[j+1])  //condtn for decreasing order use <
            {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;

            }
        }
    }
    printf("Sorted list in ascending order :\n");

    for(i=0;i<m;i++)
    {
        printf("%d\n",array[i]);
    }
}