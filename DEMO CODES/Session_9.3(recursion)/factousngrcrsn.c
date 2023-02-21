#include<stdio.h>
#include<conio.h>

int facto(int);  //function udf declare    //declare returntype int 

void main()
{
    int num;
    printf("Enter a number :-");
    scanf("%d",&num);
    printf("Factorial of a no. :-%d\n",facto(num));  // yah hum sirf int declare kre tb hi aisa kuch kr skte hai
}  // end of main function

//recursion factorial  -  ot using loop , reffer to itself
int facto(int(num))   //for all defntn of udf and then return the value to function
{
    int f;
    if(num==1)
    {
        return 1;
    }
    f=num*facto(num-1);
    return f;
}