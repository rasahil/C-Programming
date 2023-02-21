// 10. Read a no to check palindrom ( revese of no is equal to no )
#include<stdio.h>
#include<conio.h>

void main()
{
    int num ,palindrome,i=0,temp;
    printf(" Enter number is must be same as reverse :-");
    scanf("%d",&num);

    temp=num; //this is for if condition is not true then print this

//

    while(num>0)
    {
        palindrome=num%10;    // 131
        i=(i*10)+palindrome;  // 1  13 1
        num=num/10;   //131 =1.31  1 3.1 3
    }
    if(temp==i)
    {
        printf(" the number is PALINDROME :-%d",temp);

    }
    else
    {
        printf("the number is NOT PALINDROME :-%d",temp);
    }
}


// Get the number from user
// Hold the number in temporary variable
// Reverse the number
// Compare the temporary number with reversed number
// If both numbers are same, print palindrome number
// Else print not palindrome number

