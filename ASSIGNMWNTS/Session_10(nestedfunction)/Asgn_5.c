// 5. Print all even nos in the range 0- 100 and print summation
// 	2
// 	4
// 	--
// 	2550

#include<stdio.h>
#include<conio.h>

void numrange();
void f1();

void main()
{
    f1();

}

void f1()
{
    int num;
    printf("\t ===== number between 1 to 100 ====\n");
    numrange(num);
}

void numrange(int a)
{
    int sum=0;   
    while(a<=100)
    {
        if(a%2==0)
        {
            sum=sum+a;
            printf("\tthe numbers are Even :- %d\n",a);
        }
        a++;
    }
    printf("=========================================================\n");
    printf("\tSummation of even nummbers is :-%d\n",sum);
    printf("=========================================================\n");
}