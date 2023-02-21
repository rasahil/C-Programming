// 3. Read total distance to be travel by biker with the maximum speed 65 km / Hr and average fuel
// consumption 45 km/liter .
#include<stdio.h>
#include<conio.h>
/*read totd , speed , hrs ,fuel liter*/
void main()
{
    int  s=65, fc=45, tot , dis , fr;
    printf("Enter distance to be travel :-\n");
    scanf("%d",&dis);

    //  compute
    tot=dis/s;
    fr=dis/fc;

    // print statements 
    printf("DISTANCE TRAVELLED BY BIKER :-%d\n",dis);
    printf("Time of travelling :-%d Hrs\n",tot);
    printf("fuel requaired to travel :- %d liters\n",fr);


}
