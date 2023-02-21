// Single Dim array of user defined size 
// add all array elements to find the sum of them 
// Find the greatest and lowest among array elements
#include<stdio.h>
#include<conio.h>

#define  MAX 100  //MACRO directive

void main()
{
    int array[MAX],num,i;
    int max=0,min=999 , sum=0;     // to chake minmax so we initialize min=999 , mx=0

    printf("Enter no. of sub of single dim array :-");
    scanf("%d",&num);
    //entering data in one dia array
    for(i=0;i<num;i++)
    {
        printf("\nElement no. [%d] of array to find sum :-",i);
        scanf("%d",&array[i]);

        sum=sum+array[i];
    }
    //print all element of 1-D array
    printf(" Subscript El. \t Element no.\t Addres ofel.\n");
    for(i=0;i<num;i++)
    {
        printf("  array[%d] \t %d \t\t%u \n",i,array[i],&array[i]);
    }
printf("=====================================================\n");
printf(" SUMMATION OF ALL ELEMENTS IS :- %d\n",sum);
//Logic for determine gretest and lowest among al the array elements
// max=array[0];
// min=array[0];
for(i=0;i<num;i++)
{
    if(max<array[i])

    {
        max=array[i];
    }
    if(min>array[i])
    {
        min=array[i];
    }

}

printf("=========================================================\n");

printf(" HIGHEST VALUE OF ARRAY :- [%d]\t LOWEST VALUE OF ARRAY :- [%d] \n",max,min);
}