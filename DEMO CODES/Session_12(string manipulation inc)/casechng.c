// Read a String and change case of it 
/*
i/p - abcd
o/p - ABCD
ASCII values - 0 - 255
A - 65 
Z - 91
a-97
z-123

A - a -32
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[20];
    int i;

    printf("Enter a string in any case :-");
    scanf("%s",&str);

    //case changing here
    for(i=0;i<strlen(str);i++)
    {
        //case for capital letters
        if(str[i]>=65 && str[i]<91)  //this 65 and 91 is ASCII value
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<123)  //this 97 and 123 is ASCII Value
        {
            str[i]-=32;
        }
    }
    printf(" Change case string : %s\n",str);
}
