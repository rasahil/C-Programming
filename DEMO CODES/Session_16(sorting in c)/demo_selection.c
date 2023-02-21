/*Selection sort in C: C program for selection sort to sort numbers. This code implements selection sort algorithm to arrange numbers of an array in ascending order. With a little modification, it will arrange numbers in descending order.
*/
// Selection sort algorithm implementation in C

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[200],i,j,num,temp,pos;

    printf(" Enter no. of element :-\n");
    scanf("%d",&num);

    printf("Enter %d integer :-",num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }


    for(i=0;i<(num-1);i++)
    {
        pos=i;
        for(j=i+1;j<num;j++)
        {
            if( array[pos] > array[j])
            {
                pos = j;
            }
        }
        if( pos != i)
        {
            temp       =array[i];
            array[i]   =array[pos];
            array[pos] =temp;
        }
    }
    printf(" Sorted list in ascending order :\n");

    for ( i=0;i<num;i++)
    {
        printf("%d\n",array[i]);
    }
}