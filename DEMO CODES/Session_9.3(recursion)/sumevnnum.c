// Find sum of all even nos in the range 0-100

#include<stdio.h>
#include<conio.h>

int esum(int);

void main()
{
    
    printf(" == all the even no. between 1 to 100 == \n");
    printf("Summation of all Even in the range 0-100 :-%d\n",esum(0));

}

int esum(int num)
{
    int sum;
    if(num==100)
    
        return 100;
    
sum=num+esum(num+=2);

return sum;
}