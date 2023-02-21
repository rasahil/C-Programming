// generate a fibbo series for n terms by writing a recursive function

#include<stdio.h>
#include<conio.h>


int fibbo(int);  //adision of previous two  numbers

void main()
{
    int num;
    printf("---: the number is Fibonocci Series :---\n");
    printf(" Enter a number :-\t");
    scanf("%d",&num);
    printf(" %4d %4d",0,1);  // initialize the value
    fibbo(num-1);  //call to function fibbo wd prmtr num
    
}

int fibbo(int num  )
{
    static int n1=0 ,n2=1 ,rlt=0;  //declare value for loop

    if(num==1)  //if cndtn is not 1 then leave return go to next
    {
        return 0;
    }
    
        rlt=n1+n2;
        
        n1=n2;
        n2=rlt;
        
    printf("%4d",rlt);
    fibbo(num-1);   //his decreament the value given by user --1
    
    
    
}