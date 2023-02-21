// Read a temp in degree celcuis 
/*
              <12 dg --- Super cool
              >=12 <20 - avg cool
              >=20 <35 -- warm
              >=35 --- hot


*/

#include<stdio.h>
#include<conio.h>
void main()
{
    float temp;
printf("Enter temperature :");
scanf("%e",&temp);

if(temp<12)
{
    printf(" -is SUPER COOL ");
}
else if(temp<20)
{
    printf(" -is Avg Cool ");
}
else if(temp<35)
{
    printf("  - is WARM ");
}
else
{
    printf(" is HOT ");
}
}