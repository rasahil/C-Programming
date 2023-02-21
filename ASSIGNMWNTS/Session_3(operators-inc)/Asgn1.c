// 1. Read price for dozen of oranges and quantity to purchase. Compute price for given quantity and
// round it to nearest integer
#include<stdio.h>
#include<conio.h>
void main()
{
    float price,qty , tamnt ;
    int cnvt,checkrnd ;


    printf(" Enter the price of dozen Orange : ");
    scanf("%f",&price);
    printf(" Enter the qty of Orange : ");
    scanf("%f",&qty);
    //  compute
    tamnt=price*qty;
    printf(" price of dozen orange is : - %.2f\n",price);
    printf(" quantity of dozen orange is :- %.2f\n",qty);
    printf(" total amount of orange is :- %.2f\n", tamnt);  //22.30
    cnvt=tamnt;  //22
    printf("--------------------------------\n");

    if(tamnt>0)             
    { 
        checkrnd=tamnt*10; // 223.0 multiplication value
        checkrnd=checkrnd%10; // 3 mod of value 
        if(checkrnd>=5)
        {
            cnvt++;
            // cnvt=cnvt+1;
        }
    } 
    printf(":- ----| %d |---- -:is the total amnt to paid \n",cnvt);
        

    

}
