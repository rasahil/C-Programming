// A function to convert case of a given string

#include<stdio.h>
#include<string.h>
#include<conio.h>

void func(char []);

void main()
{
    char str[30];
    printf("Enter a string to convert it into another case:- ");
    gets(str);
    func(str);
}

void func(char str[])
{
    int i;
    // changing case here
    for(i=0;i<=strlen(str);i++)
    {
        // CASE FOR CAPITAL LETTERS 
        if(str[i]>=65 && str[i]<91)  // this for upper case
        {
            str[i]+=32;
        }
        //CASE FOR SMALL LETTERS
        else if(str[i]>=97 && str[i]<123)  //this for lower case
        {
            str[i]-=32;
        }
    } 
    printf(" Change case of string is :- %s \n",str);
}