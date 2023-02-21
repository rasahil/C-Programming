// Read your name to print for 20 times on screen using counter 
#include<stdio.h>
#include<conio.h>

void main()
{
    int cntr,i=1;
    char name[10];
    
    // printf("Enter no. to be print:-");
    // scanf("%d",&cntr);
    
    printf(" Enter your name :-");
    scanf("%s",&name);
    // for(i=1;i<=cntr;i++)
    // {
    //     printf(" \t%d .   Enter name is :- %s\n",i,name);
    // }
    
    while(1)
    {
        printf(" \t%d .   Enter name is :- %s\n",i,name);
        if(i==20)

        {
            break;
        }
        i++;
    }
    
        // printf(" my name is :- %s",name);
}