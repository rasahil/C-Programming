// 3. Read any name and print it for 20 times on the screen 
// 	read - Ankita
// 	1 Ankita 
// 	2 Ankita
// 	20 Ankit
#include<stdio.h>
#include<conio.h>


void f1();

void repeat(char [] );

void main()
{ 
    f1();
}



void f1()
{
    char name [10];
    printf(" Enter your name :-");
    scanf("%s",&name);

    repeat(name);
}


void repeat(char (a[10]))
{
    int i;
    for(i=1;i<=20;i++)
    // while(i<=20)
    {
        printf(" %d . Your name is :- %s \n",i,a);
        // i++;
    }
}