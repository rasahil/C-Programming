// nesting of a function - referring a function from anothers definition
#include<stdio.h>
#include<conio.h>

void fun1 (void);
void fun2 (void);
void fun3 (void);
void fun4 (void);

void main()
{
    int x;
    printf(" this is the main function statement \n");
    fun1 ();
    printf(" finally retuen to main function\n");
}

void fun1 ()
{
    printf(" This is function 1 part \n");
    fun2 ();
    printf(" returning to function 1\n");
}

void fun2()
{
    printf("This is function 2 part \n");
    fun3();
    printf(" returning to function 2\n");
}

void fun3()
{
    printf(" This is function 3 part\n");
    fun4();
    printf(" return to function 3\n");
}

void fun4()
{
    printf("This is Function 4 part \n");
    
    printf(" returning to previous \n");
}