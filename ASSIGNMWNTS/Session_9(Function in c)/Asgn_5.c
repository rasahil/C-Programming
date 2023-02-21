// 5. Print all even nos in the range 0- 100 and print summation
// 	2
// 	4
// 	--
// 	2550

#include<stdio.h>
#include<conio.h>

void rangenum(int);

void main()
{
    int num;
   
    printf(" ==== Even no Between 1 to 100 ==== \n");
    rangenum(num);

}

void rangenum(int num)
{
    int sum=0;
    for (num=1;num<=100;num++)
    {

        if(num%2==0)
        {
            sum=sum+num;
            printf(" %d :- is EVEN no.\n",num);
        }
    }
    printf(" summation of no. is:-%d",sum);

    
}

