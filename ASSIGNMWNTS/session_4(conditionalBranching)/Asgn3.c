// Read 3 persons name, age to find sum ,avg , eldest and youngest among them
#include<stdio.h>
#include<conio.h>
void main()
{
    char np1,np2,np3;
    int ap1,ap2,ap3, sum;
    float avg;
    printf("Enter PERSON1 name :-");
    scanf("%s",&np1);
    printf("Enter PERSON1 Age :-");
    scanf("%d",&ap1);
    printf("Enter PERSON2 name :-");
    scanf("%s",&np2);
    printf("Enter PERSON2 Age :-");
    scanf("%d",&ap2);
    printf("Enter PERSON3 name :-");
    scanf("%s",&np3);
    printf("Enter PERSON3 Age :-");
    scanf("%d",&ap3);
    sum=ap1+ap2+ap3;
    printf("\nSUM IS :- %d",sum);
    avg=sum/3;
    printf("\nAverage is :- %f\n",avg);
    if(ap1>ap2)
    {
        if(ap1>ap3)
        {
            printf("\nperson 1 is eldest among them", np1);
        }
        else
        {
            printf("\nperson 3 is eldest ",np3);
        }
        
    }
    else
    {
        if(ap2>ap3)
        {
            printf("\nperson 2 is eldest ",np2);
        }
        else
        {
            printf("\nperson 3 is eldest",np3);
        }
    }
    printf("\n----------------------------\n");
    if(ap1<ap2)
    {
        if(ap1<ap3)
        {
            printf("\n%d  person 1 is youngest among them", ap1);
        }
        else
        {
            printf("\n%d is youngest ",ap3);
        }
        
    }
    else
    {
        if(ap2<ap3)
        {
            printf("\n%dis youngest ",ap2);
        }
        else
        {
            printf("\n%d is youngest",ap3);
        }
    }
       
    
    
    
    

    
    
    
    
}
