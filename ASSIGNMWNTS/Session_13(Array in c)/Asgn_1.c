/*Construct a single dim array of integers to find
*list of all elements with sub.
*sum
*Average
*Max
*Min
 form them*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int dim[20];
    int sum =0, max=0, min=500,i;
    float Average=0;

    // logic for entering value in array
    for(i=0;i<10;i++)
    {
        printf(" Enter value for getting result [%d] :-",i);
        scanf("%d",&dim[i]);

        sum=sum+dim[i];
        if(max<dim[i])
        {
            max=dim[i];
        }
        if(min>dim[i])
        {
            min=dim[i];
        }
    }
    Average=sum/10;
    // logic for displaying array variable sum,average,max,min
    printf("array sub\tlist sub\tAdrs of sub\n");
    for(i=0;i<10;i++)
    {
        
        printf(" dim[%d]\t\t%d\t\t%u\n",i,dim[i],&dim[i]);
    }
    printf("==================================================\n");
    printf("\t sum \tAverage \tMax value\tMin value\n");
    printf("\t%d \t %.2f \t %d value\t%d value\n",sum,Average,max,min);

    
}