// . Read a Four digit no to print it using alphabate
// i.p 1234
// o.p One Two Three Four 

#include<stdio.h>
#include<conio.h>


void main()
{
    int num , a=1000 ,i;
    printf(" Enter four digit number :- ");
    scanf("%d",&num);

    while (num>0)
    {
        switch(num/a)
        {
            case 1:
                printf("ONE ");
            break;
            case 2:
                printf("TWO ");
            break;
            case 3:
                printf("THREE ");
            break;
            case 4:
                printf("FOUR ");
            break;
            case 5:
                printf("FIVE ");
            break;
            case 6:
                printf("SIX ");
            break;
            case 7:
                printf("SEVEN ");
            break;
            case 8:
                printf("EIGHT ");
            break;
            case 9:
                printf("NINE ");
            break;
            default:
            printf("ZERO ");
        } //closing swich bracket

        num=num-(num/a)*a; // 1234-1*1000 --n-234
		a=a/10; // a=100
    }  //closing while bracket
    
}
