/*Insertion sort in C: C program for insertion sort to sort numbers. This code implements insertion sort algorithm to arrange numbers of an array in ascending order. With a little modification, it will arrange numbers in descending order.
*/
// Insertion sort algorithm implementation in C
/* Insertion sort ascending order */

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[1000],i,j,num,temp;

    printf("Enter number of elements\n");
    scanf("%d",&num);

    printf("Enter %d integers\n",num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=1;i<=num-1;i++)
    {
        j=i;
        while(j>0 && array[j-1]>array[j])
        {
            temp        =array[j];
            array[j]    =array[j-1];
            array[j-1]  =temp;

            j--;
        }
    }
    printf("Sorted list in ascending order :\n");

    for(i=0;i<=num-1;i++)
    {
        printf("%d\n",array[i]);
    }

}