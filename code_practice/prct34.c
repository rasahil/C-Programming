// Read any 3 nos to find greatest and lowest among 
#include <stdio.h>
#include<conio.h>


void main()
{
    int a,b,c;
    printf("Enter any 3 nos\n");
    scanf("%d%d%d",&a,&b,&c);
    // expression to determine gretest value 
    if(a>b && a>c)
        printf("%d is gretest  \n",a);
    else if(b>a && b>c)
        printf("%d is gretest  \n",b);
    else 
        printf("%d is gretest  \n",c);
    // Expression to determine lowest value 
    if(a<b && a<c)
        printf("%d is lowest  \n",a);
    else if(b<a && b<c)
        printf("%d is lowest  \n",b);
    else
        printf("%d is lowest  \n",c);
}