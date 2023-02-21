// 1. Read a radius of a circle to find diameter, area, circumference .
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,dia;/*input values*/
    float area,circ; 
    printf(" ENTER THE VALUE FOR RADIUS :-");
    scanf("%d",&r);/*%d for get value and &r is for addresss of value*/
    dia=2*r;

    area=(float)3.14*(r*r);
    circ=(float)2*3.14*r;
    printf("DIAMETER OF CIRCLE IS:-%d\n",dia);
    printf("AREA OF CIRCLE IS:-%.2f %f \n",area);
    printf("CIRCUMFERENCE OF CIRCLE IS:-%.2f %f\n",circ);
    
}
// hence we succesfully exicuted the first Assignment