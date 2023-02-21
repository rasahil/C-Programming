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
    char name[50][50] , a[50];
    int age[30],i,j,num , temp;
   

    printf(" Enter no . person :-");
    scanf("%d",&num);

    printf("Enter %d persons NAME & AGE :-\n",num);
    for(i=0;i<=num-1;i++)
    {
        printf("Enter person %d s name :-\n",i);
        scanf("%s",&name[i]);
        printf("Enter person %d s Age :-\n",i);
        scanf("%d",&age[i]);

    }

    
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(a,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],a);
                // swap = name[i];
                // name[i]= name[j];
                // name[j]=swap;

                temp = age[i];
                age[i ]= age[j];
                age[j] = temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(strcmp(name[i],name[j])==0 && age[i]>age[i+1])
            {
                strcpy(a,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],a);
                // swap = name[i];
                // name[i]= name[j];
                // name[j]=swap;

                temp = age[i];
                age[i ]= age[j];
                age[j] = temp;
            }
        }
printf("Sorted List in ascending order  :\n");

    for(i=0;i<num;i++)
    {
        printf("\t%s",name[i]);
        // printf("=====\n");
        printf("\t%d \n",age[i]);
    }
    
printf("-------\n");
// printf("Sorted List in ascending order  :\n");

//     for(i=0;i<num;i++)
//     {
//         printf("\t%s",name[i]);
//         // printf("=====\n");
//         printf("\t%d \n",age[i]);
//     }

}
}


