// 2. Read inital reading, final reading of a electricity board consumer by reading name, meter no.
// Compute total units consumed and bill at the rate 3.50/=Rs per unit
#include<stdio.h>
#include<conio.h>
void main()
{
    int ir,fr ,totr,mrn;
    char rnm[10];
    float  bill;
    /*read :- inr , fnr of  electricity board , reading name , meter no. */
    printf(" \t\nEnter initial reading of electricity board :-");
    scanf("%d",&ir);
    printf(" \t\nEnter final reading of electricity board :-");
    scanf("%d",&fr);

    printf(" \t\nEnter  reading name  :-");
    scanf("%s",&rnm);
    printf(" \t\nEnter  Meter no.  :-");
    scanf("%d",&mrn);

    // compute
    totr=fr-ir;
    bill=totr*3.50;

    //  print section 
    printf("\t\t-->ELECTRICITY BILL<--\n");
    printf("reading name :-%d\n",rnm);
    printf("meter no. :-%d\n",mrn);
    printf("initial reading :-%d\n",ir);
    printf("final reading  :-%d\n",fr);
    printf("total reading  :-%d\n",totr);
    printf(" Electricity BILL :-%.2f\n",bill);
    // 
   
}