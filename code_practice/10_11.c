#include<stdio.h>
#include<conio.h>

void main()
{

int a=4,b=5;

{
int a=40,b=50;
printf("%3d%3d are in internal block",a,b);
}
printf("%3d%3d are in external block",a,b);

}

