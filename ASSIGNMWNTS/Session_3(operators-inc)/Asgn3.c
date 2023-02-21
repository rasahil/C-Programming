// 3. Read a no to check whether it is even or odd
#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf(" Enter value to check :- " );
    scanf(" %d",&n);
    if(n % 2 == 0)
    {
        printf("%d is Even  value\n",n);
    }
    else
    {
        printf("%d is odd value \n",n);
    }
    

}