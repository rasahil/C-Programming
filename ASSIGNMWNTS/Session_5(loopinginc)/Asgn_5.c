// Read a no to check prime ( a no divisible by 1 and itself)
#include<stdio.h>
#include<conio.h>
void main()
{
    int num , i , count=0;
    printf(" Enter a number to check prime number or not :-");
    scanf("%d",&num);
    for(i=2;i<num;++i)   
    {
        // check for non prime number
        if(num%i==0)
        {
            count=1;
            break;
        }
    }
    if (count==0 )
        printf("%d is a prime number ",num);
    else
        printf("%d is not a prime number.",num);

}

// #include <stdio.h>
// int main()
// {
 
//    int n, i, count = 0;
 
//     printf("Enter number to check prime number or not");
//     scanf("%d",&n);
 
//     for(i=2; i<=n/2; ++i)
//     {
//         // check for non prime number
//         if(n%i==0)
//         {
//             count=1;
//             break;
//         }
//     }
 
//     if (count==0)
//         printf("%d is a prime number.",n);
//     else
//         printf("%d is not a prime number.",n);
 
//     getch();    
// }
