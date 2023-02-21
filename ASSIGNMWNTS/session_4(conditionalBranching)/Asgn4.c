// Read book name , author name, price, quantity.
//  Offer 20% discount to price computed and print net price
#include<stdio.h>
#include<conio.h>
void main()
{
    int price , qty;
    float netp , dis, totp;
    char bname, authnm;

    printf(" Enter BOOK NAME :-");
    scanf("%s",&bname);
    printf("Enter Author NAME :- ");
    scanf("%s", &authnm);
    printf("Enter Price for Book :-");
    scanf("%d",&price);
    printf("Enter QUANTITY of BOOK :-");
    scanf("%d",&qty);

    totp=price*qty;
    dis=totp*.2;
    netp=totp-dis;

    printf("\nTOTAL PRICE :-%f",totp);
    printf("\nDISCOUNT PRICE :-%.2f",dis);
    printf("\nNET PRICE :-%.2f",netp);

}
