// Understanding nesting of a function 

#include<stdio.h>
#include<conio.h>

void printline(char);
int dsum(int);

void main()
{
    int num;
    char nm;
    printf("Enter a number :-");
    scanf("%d",&num);
    printline('=');
    
    printf("\nhere sum of digits is :-%d ",dsum(num));

printf("\n");
printline('=');
}

// definition of line print function 
void printline (char x)
{
    int i;
    for(i=0;i<=30;i++)
    {
        printf("%c",x);
    }
}


//definition for digital sum of
int dsum (int num)
{
    printf("\n");
    printline('~');
    int ds=0;
    while(num>0)
    {
        ds+=(num%10);
        num/=10;
    }
    return ds;
}