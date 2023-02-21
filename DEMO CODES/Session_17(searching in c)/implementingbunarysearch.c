// Implementation of Binary Search 
#include<conio.h>
#include<stdio.h>

void main()
{
    int num,i,pos,mid,search;
    int A[]={10,20,30,40,50,60,70,80,90,100};

    /*
	A- Array of Sorted Elements 
	num - Size of an array 
	i-Array Counter 
	Mid - Mid Position 
	search- Element to Search
	pos- found position 
	*/

    num=sizeof(A)/2;  //size of an array
    mid=A[num/2];

    printf("Enter Element to be searched :-");
    scanf("%d",&search);
    // aplly binary search
    if(search == mid)
    {
        pos = num/2;
        printf("FOUND AT POSITION : %d\n",pos);
    }
    else if(search<mid)
    {
        for(i=(num/2);i>=0;i--)
        {
            if( search==A[i])
            {
                pos=i;
                break;
            }
        }
    }
    else if(search>mid)
    {
        for(i=(num/2)+1;i<num;i++)
        {
            if(search==A[i])
            {
                pos=i;
                break;
            }
        }
    }
    //confirm search
    printf("Element found at position :%d\n",pos);

}

