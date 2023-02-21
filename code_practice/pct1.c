/* A pro for Item Bill 
Input - Item Name , Unit Price , Quantity
Compute - Price -- Up * Qty 
				  Dis-- Price *.05;
				  NetPrice --Price -Dis
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    /* declaration of variable*/
    char inm[10];
    int up , qty , price ;
    float dis, netp;

//    read the data 
    printf(" Enter Item name :- ");
    scanf("%s",&inm);
    printf("Enetr unit price and \t Quantity :- ");
    scanf("%d %d",&up,&qty);

    /*compute value */
    price=up*qty;
    dis=price*.05;
    netp=price-dis;

    // print bill
    printf("\t\t\t\t\tBILL\n");
    printf("ITEM NAME:- %s\n",inm);
    
    printf("UNIT PRICE:-%d \n\tQUANTITY:-%d\n\t PRICE:-%d \n",up,qty,price);
    printf("DISCOUNT:-%.2f\n\tNETPRICE:-%.2f\n",dis,netp);


}