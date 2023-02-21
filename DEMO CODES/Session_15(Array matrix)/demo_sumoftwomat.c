//addition of two matrices
#include<stdio.h>
#include<conio.h>

void main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9};
    int B[3][3]={10,20,30,40,50,60,70,80,90};
    int C[3][3];
    int row,clm;

    printf("====matrix A ==== \n");
    for(row=0;row<3;row++)
    {
        for(clm=0;clm<3;clm++)
        {
            printf("%4d",A[row][clm]);
        }
        printf("\n");
    }

    printf("===== Matrix B ===== \n");
    for(row=0;row<3;row++)
    {
        for(clm=0;clm<3;clm++)
        {
            printf("%4d",B[row][clm]);
        }
        printf("\n");
    }
//logic for sum of two matrices
    printf("== Addition of A & B mat ==\n");
    for(row=0;row<3;row++)
    {
        for(clm=0;clm<3;clm++)
        {
            C[row][clm]=A[row][clm]+B[row][clm];  //addition of two matrices
            printf("%4d",C[row][clm]);
        }
        printf("\n");
    }
}