// array of undefined substript

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int A[]={10,20,30,40,50,60,70,80,90,100,110};  //array of a
    int i,num;   //variable
    num=sizeof(A)/8;  //total elements = sizeof array /2 - size of int
    printf("Array Subscript \t Elements \t Array Address\n");
    for(i=0;i<num;i++)
    {
        printf("\t A[%d]\t\t  %d\t\t  %u\n ",i,A[i],&A[i]);
    }
    
}