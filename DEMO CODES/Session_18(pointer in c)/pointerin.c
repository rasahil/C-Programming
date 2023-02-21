// Demonstrating pointers 

#include<stdio.h>
#include<conio.h>

void main()
{
    int A=6;    //premetive type
    int *B;     //declaration of derived tupe
    B=&A;       //B points (ref) to A
    printf("value of A:%d\n",A);
    printf("memory Adress of A:%u\n",&A);
    printf("Value Holds by B:%u\n",B);
    printf("Adress of B:%u\n",&B);        //adress of B
    printf("memory sizeof B:%d\n",sizeof(B));
    printf("Value ref by B :%d\n",*B);
    *B+=6;      //A+=5
    printf("Value of A :%d\n",A);

}