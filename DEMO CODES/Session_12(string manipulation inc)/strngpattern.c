// String pattern
/* 
i/p AxiomTechGuru
o.p 
A
Ax
Axi
Axio
Axiom
....
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[30];
    int rw,clm;
    
    printf(" Enter a string :");
    gets(str);
// pattern generation of a String 

    for(rw=0;rw<strlen(str);rw++)
    {
        for(clm=0;clm<=rw;clm++)
        {
            printf("%c",str[clm]);
        }
        printf("\n");
    }
}