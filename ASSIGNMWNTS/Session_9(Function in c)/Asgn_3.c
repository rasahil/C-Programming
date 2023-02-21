// 3. Read any name and print it for 20 times on the screen 
// 	read - Ankita
// 	1 Ankita 
// 	2 Ankita
// 	20 Ankita


#include<stdio.h>
#include<conio.h>

void name(char[]);
void main()

{
    char nm[10];
    printf(" Enter your name  :-");
    scanf("%s",&nm);
    name(nm);
}

void name(char(a[]))
{
    int i=1;
    while(i<=20)
    {
        printf("%d. YOUR NAME IS :- %s\n",i,a);
        i++;
    }
}