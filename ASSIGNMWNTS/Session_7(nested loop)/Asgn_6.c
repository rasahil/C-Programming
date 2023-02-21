/*6 
     *   *   *   *   *   *   *   *   *    
         *   *   *   *   *   *   * 
             *   *   *   *   *
                 *   *   *
                     *     
*/
#include<stdio.h>
#include<conio.h>


void main()
{
    int row, clm ,i;
    for(row=1;row<=9;row++)  //looping part of clm space
    {
        for(clm=1;clm<=row;clm++) //spacess
        {
            printf("   ");
        }
        for(i=9;i>=(row*2-1);i--) ///this is for * part 
        {
            printf(" * ");
        }
        printf("\n");
    }

}