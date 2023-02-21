// product of two matrices 
#include<stdio.h>
#include<conio.h>

#define MAX 100

void main()
{
    int n,m,n1,m1,r,c,k;
    int sum=0;
    int first[MAX][MAX],second[MAX][MAX],product[MAX][MAX];

    printf("Enter value for no. of row and column for FIRST MAT :\n");
    scanf("%d%d:-",&m,&n);

    // taking value to the matrix one 
    printf(" Enetering elements for FIRST matrix \n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d %d:-",r,c);
            scanf("%d",&first[r][c]);
        }

    }
    // taking value for second matrix
    printf(" Enter value for no. of row and column for SECOND MAT :\n");
    scanf("%d%d",&m1,&n1);
    // but the both matrix are same then it will be multiply otherwise not so we use
    if(n!=m1)
    {
        printf(" the value of both matrices are not same \n");
        printf(" Enter same row and colum of each matrix \n");
    }
    else
    {
        printf("Enter element for second matrix\n");
        for(r=0;r<m1;r++)
        {
            for(c=0;c<n1;c++)
            {
                printf("%d %d:-",r,c);
                scanf("%d",&second[r][c]);
            }
        }
         //for multiply of two mat and save it into sum var
        for(r=0;r<m;r++)
        {
            for(c=0;c<n1;c++)
            {
                for(k=0;k<m1;k++)
                {
                    sum = sum + first[r][k]*second[k][c];
                }
                product[r][c] = sum ;  //result in that 
                sum = 0;
            }
        }

        printf(" product of the matrices :\n");

        for(r=0;r<m;r++)
        {
            for(c=0;c<n1;c++)
            {
                printf("[%4d]\t",product[r][c]);
            }
            printf("\n");
        }
    } 


}