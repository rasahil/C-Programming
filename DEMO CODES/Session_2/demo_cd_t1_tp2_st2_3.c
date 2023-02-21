/* A pro for Item Bill 
Input - Item Name , Unit Price , Quantity
Compute - Price -- Up * Qty 
				  Dis-- Price *.05;
				  NetPrice --Price -Dis
*/
#include <stdio.h>
#include<conio.h>
void main()
{
	/* Declaration of variables */
	char inm[10];
	int up,qty,price;
	float dis,netp;

// Read the data
	
	printf("Enter Item Name :");
	scanf("%s",&inm);
	printf("Enter Unit Price \tQuantity :");
	scanf("%d%d",&up,&qty);
// Compute 
price =up*qty;
dis=price*.05;
netp=price-dis;

// print Bill
printf("\t\t\t\t Bill \n");
printf("Item Name :%s\n",inm);
printf("Unit Price :%d\tQuantity :%d\tPrice :%d\n",up,qty,price);
printf("Discount :%.2f\tNetPrice :%.2f\n",dis,netp);

}
