//  develop two arrays to store name,age sort them as per ascending age
//  Sort them as per ascending name
//  if more than 2 elements having same name ,then sort as per their age
//  Sahil 10
//  Sahil 20

//  Likewise irrespective their actual position in an array

#include<stdio.h>
#include<conio.h>

#include<string.h>

#define MAX 200
void main()
{
    char name[MAX][MAX] , a[MAX];
    int age[MAX],i,j,num , temp;
   

    printf(" Enter no . person :-");
    scanf("%d",&num);

    printf("Enter %d persons NAME & AGE :-\n",num);
    for(i=0;i<num;i++)
    {
        printf("Enter person %d s name :-\n",i+1);
        scanf("%s",&name[i]);
        printf("Enter person %d s Age :-\n",i+1);
        scanf("%d",&age[i]);

    }

    
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(a,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],a);
                // swap = name[i];
                // name[i]= name[j];
                // name[j]=swap;

                temp = age[j];
                age[j ]= age[j+1];
                age[j+1] = temp;
            }
        }
    }
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(strcmp(name[j],name[j+1])==0  && age[j]>age[j+1])
            {
                strcpy(a,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],a);
                // swap = name[i];
                // name[i]= name[j];
                // name[j]=swap;

                temp = age[j];
                age[j ]= age[j+1];
                age[j+1] = temp;
            }
        }
    }
    printf("Sorted List in ascending order  :\n");

    for(i=0;i<num;i++)
    {
        printf("\t%s",name[i]);
        // printf("=====\n");
        printf("\t%d \n",age[i]);
    }
    printf("======\n");
    
}

