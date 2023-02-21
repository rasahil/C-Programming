// A pro. to read a string and print its reverse 
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[30];
    int i;
    printf("Enter a String :-");
    scanf("%s",&str);
    printf("Original String :%s\n",str);
    //logic for reversing a string
    printf("Reverse string :");

    
    
    
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    
}