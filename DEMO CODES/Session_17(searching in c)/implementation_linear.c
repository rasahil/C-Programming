// Implementation of Linear Search 
#include<stdio.h>
#include<conio.h>

void main()
{
    int A[]={3,23,9,18,7,5,72,8};
    int search,num,i,pos;

    

    num=sizeof(A)/2;
    printf("Enter element to be search :");
    scanf("%d",&search);

    //Implementation of linear search
    for(i=0;i<num;i++)
    {
        if(A[i]==search)
        {
            pos=i;
            break;
        }
    }
    //confirm search
    if(i<num)
    {
        printf("Enter %d found at position :%d\n",search,pos);
    }
    else if(i>=num)
    {
        printf("DATA NOT FOUND IN AN ARRAY\n");
    }
}