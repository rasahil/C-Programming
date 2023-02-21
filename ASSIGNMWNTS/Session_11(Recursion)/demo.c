// generate a fibbo series for n terms by writing a recursive function

#include<stdio.h>
#include<conio.h>


int fibbo(int);  //adision of previous two  numbers

int main()
{
    int num;
    printf("---: the number is Fibonocci Series :---\n");
    printf(" Enter a number :-\n");
    scanf("%d",&num);
    printf("%d %d",0,1); //5
    fibbo(num);
    return 0;
    
}

int fibbo(int a)
{
    static int n1=0 ,n2=1 ,rlt=0;
    
    if(a==1)
    {
        return 0;
    }

        rlt=n1+n2;
    
        n1=n2;
        n2=rlt;
    
    printf("%4d",rlt);
    fibbo(a-1);
}
    // rlt= rlt +fibbo(n1+n2);
// return num ;
    
