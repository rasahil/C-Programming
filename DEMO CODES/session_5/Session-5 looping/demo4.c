// Read a no to find 10 mutliples of a no 
/* 
i.p 5
5
10
15
..50
*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int num ,i=1;
    {
    printf("Enter Number for table :- ");
    scanf("%d",&num);
    
    printf(" == TABLE FOR %d IS HERE  ==\n",num);

    for(i=1;i<=10;i++)
    printf("\t%d  *  %d  =  %d \n",num,i,(num*i));
    
    }
}