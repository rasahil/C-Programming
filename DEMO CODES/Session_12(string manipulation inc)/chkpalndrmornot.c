// read a String and check whether it is palindrom or not 
/*
reverse of a String is equal to a same string 
nitin
wow
mom
madam
dad
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[20];
    int i,j;

    printf(" \tString value to chake PALINDROME or not \n");
    printf(" \tEnter string value :-");
    // scanf(" %s",&str);
    gets(str);

    //logic for chaking palindrome or not
    for(i=0,j=strlen(str)-1;i<=j;i++,j--)    
    {
        if(str[i]!=str[j])
        {
            break;
        }
    }
    if(i>j)
    {
        printf(" The Entered string is PALINDROME :-%s\n",str);
    }
    else
    {
        printf(" The enterd string is NOT PALLINDROME :-%s\n",str);
    }
    
}