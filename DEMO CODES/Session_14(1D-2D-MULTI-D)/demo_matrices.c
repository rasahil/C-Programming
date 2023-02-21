// Demonstrating 2-D array 
// Read size of mat ,insert and print element in the mat format
// find out row-wise summation

#include<stdio.h>
#include<conio.h>

#define MAX 200

void main()
{
    int array[MAX][MAX];
    int m,n,i,j,rsum=0;
    printf(" Enter a no for matrices \n:-");
    scanf("%d %d",&m ,&n);

    // logic for insert value to the matrix

    for(i=0;i<m;i++)   //represent  the row 
    {
        for(j=0;j<n;j++)      //represent the column
        {
            printf("Enter Element of A[%d][%d] ",i,j);  //taking row column value from user
			scanf("%d",&array[i][j]);   //storing in array

        }
    }

    // logic for displaying value and sum of row
    for(i=0;i<m;i++)    //for row and print element of matrices
    {
        rsum=0;     //start frm rsum=0
        for(j=0;j<n;j++)  //for loop to repeat proces
        {
            printf("[%4d]",array[i][j]);  // disply row values
            rsum+=array[i][j];  //sum of row value
        }
        printf("------%d",rsum);
        printf("\n");  // for next value 
    }

}