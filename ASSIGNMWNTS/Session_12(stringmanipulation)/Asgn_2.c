// Develop a function will returns no of occurances of a character in a string 
// o/p character occures 5 times in a string 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void times(char []);

void main()
{
    char str[50];
    printf(" Enter a string here :-\n:- ");
    // scanf("%s",&str);
    gets(str);

    times(str);
}

void times(char str[])
{
    int j , ch=0;
    char a;
    printf(" Enter a character to chake occurance of charactor :-  ");
    scanf("%c",&a);
    for(j=0;j<strlen(str);j++)
    {
        if(a==str[j])
        {
            ch++;
        }
    }
    printf("\nThe character  :- %c  :- is occures -: %d :- times in a string:-",a,ch);
}
