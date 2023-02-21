//Read a radius of a circle to find diameter, area, circumference .
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,dia;
    float area,circ;
    printf(" ENTER THE VALUE FOR RADIUS :-");
    scanf("%d",r);
    printf("Diameter Of the Radius:");
    scanf("%d",dia);
    dia=2*r;
    printf("Area And Cirs:");
    area=3.14*r*r;
    circ=2*3.14*r;
    // printf("DIAMETER OF CIRCLE IS:-%d",dia);
    printf("AREA OF CIRCLE IS:-%f",area);
    printf("CIRCUMFERENCE OF CIRCLE IS:-%f",circ);
   
}