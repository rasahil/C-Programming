// 5   
//                     *
//                 *   *   *
//             *   *   *   *   *
//         *   *   *   *   *   *   *
//     *   *   *   *   *   *   *   *   *   


#include<stdio.h>
#include<conio.h>


void main()
{
    int row, clm ,i;
    for(row=1;row<=5;row++)      //-
    {                            // this part for looping blank spaces 
        for(clm=5;clm>=row;clm--)//-
        {
            printf("   ");
        }
        for(i=0;i<(row*2-1);i++)  // this is for * part 
        {
            printf(" * ");
        }
        printf("\n"); //shift to next line
    }

}