// Devlop a function which will read a string and return no of words in it.
// eg:- 
//    i/p Axiom Techguru Pvt. Ltd. Nagpur o/p  5 words



#include<stdio.h>
#include<conio.h>
#include<string.h>


void Read();

void main()
{
    printf(" To find how no. of words are in setence \n");
    Read();

}

void Read()
{
    int i , string=1;
    char str[40];

    printf(" Enter a setence in English  :-");
    // scanf("%d",&str);
    gets(str);

    //logic for counting string in setence
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==' ' )
        {
            string++;
        }
        else if(str[0]==0)   ///here u have to take cndn fr string value become zero
        {
        string-=1;
        break;
        }
    }
    printf(" no. of words in sentence :-%d\n",string);
}