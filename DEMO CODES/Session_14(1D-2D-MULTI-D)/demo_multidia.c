// Demonstrating multi dim array 
// records marks for students 
// 10 students , 5 subj, 2 papers , 2 test - t,p

#include<stdio.h>
#include<conio.h>
// #define MAX 200   isme nhi krna hai kyuki manualy define kr rhe hai

void main()
{
    int array[2][5][2][2];
    int i,j,k,l,m;

    //taking data from user
    printf(" Enter marks data:");
    for(i=0;i<2;i++)    //student counter
    {
        for(j=0;j<5;j++)  //subject counter
        {
            for(k=0;k<2;k++)   //paper counter
            {
                for(l=0;l<2;l++)   //test counter
                {
                    printf("Enter marks of student [%d]\t Sub :[%d]\tPaper :[%d]\t Test:[%d]",i,j,k,l);
                    scanf("%d",&array[i][j][k][l]);
                }
                // printf("/n");
            }
        }
    }
    // printf("marks of student \t sub \t paper \t test\n");
    // for(m=0;m<10;m++)
    // {
    //     printf("%d\t %d\t %d\t %d /n",i,j,k,l);
    // }
    


    // printf(" Enter student name , subject , papers , test :\n");

}