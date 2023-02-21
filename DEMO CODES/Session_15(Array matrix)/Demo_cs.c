// A pro for developing a matrix 

#include<stdio.h>
#include<conio.h>
#define MAX 100

void main()
{
    int mat[MAX][MAX];
    int x,y,i,j,rsum=0;
    int csum[MAX];
    int Trace;

    printf(" Enter row & column value:-");
    scanf("%d %d",&x,&y);

    // Construct a MAT 
	printf("Enter Elements in a MAT\n");

    for(i=0;i<x;i++)               //this all
    {
        for(j=0;j<y;j++)           // for taking value
        {
            printf("taking value for matrix [%d][%d] :-",i,j);  // of matrix
            scanf("%d",&mat[i][j]);
        }                                       //  to insert
    }
        // LOGIC FOR DISPLAYING MATRIX
    printf(" elments of matrix as follows\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
// LOGIC FOR SUMMATION OF ROW VALUES
printf(" ROW WISE SUMMATION :\n");

for(i=0;i<x;i++)
{
    rsum=0;
    for(j=0;j<y;j++)
    {
        printf("%4d ",mat[i][j]);
        rsum+=mat[i][j];
    }
    printf("====> %4d\n",rsum);
}

//LOGIC FOR SUM OF COLUM ELEMENTS 
printf(" Column wise summstion \n");
for(j=0;j<x;j++)
    { 
        csum[j]=0;
        for(i=0;i<y;i++)
        {
            csum[j]+=mat[i][j];
        }
    }
    printf(" ============\n");
    for(j=0;j<x;j++)
    printf("%4d",csum[j]);
//find Transpose of matrix 
printf("\nTranspose of matrix \n");
for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%4d",mat[j][i]);
        }
        printf("\n");
    }

    //Find Trace of a square Matrix - lower Diagonal
    Trace=0;
    for(i=0,j=0;i<x;i++,j++)
    {
        Trace+=mat[i][j];
    }
    printf("Trace of matrix : %d\n",Trace);
}

