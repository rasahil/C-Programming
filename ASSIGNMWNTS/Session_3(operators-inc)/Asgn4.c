// 4. Read temp in centigrade and if it more than 30 display message hot , if it is more than 40 very hot else
// // normal 
#include<stdio.h>
#include<conio.h>

void main()
{
    int temp;
    printf(" Enter a value of temperature :- ");
    scanf("%d",&temp);
    // if(temp>=30 || temp>=40)
    // {
    //     printf(" %d tempearature is hot ",temp);
    // }
    // else
    // {
    //     printf(" %d Temprature is normal ",temp);
    // }
    if(temp>=30 && temp<40)
    {
        printf(" %d TEMPERATURE IS HOT ",temp);    
    }
    else if(temp>=40)
        {
        printf(" %d  TEMPERATURE is VERY HOT ",temp);

        }
        else
        {
            printf("  %d TEMPERATURE IS NORMAL  ",temp);

        }
   


} 