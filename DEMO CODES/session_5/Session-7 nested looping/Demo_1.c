// Program for generating 12 hrs clock on the screen 
// #include<stdio.h>
// #include<conio.h>
// #include<dos.h> // delay(ms);

// void main()
// {
//     int hrs,mins,sec;

//     for(hrs=0;hrs<12;hrs++)
//     {
//         for(mins=0;mins<60;mins++)
//         {
//             for(sec=0;sec<60;sec++)
//             {
//                 // gotoxy(35,20);  // locate the screen on sp. cols,row
//                 printf("%d::%d::%d",hrs,mins,sec);
//                 delay(100);// delay the process for sp. milliseconds
//             }
            
//         }
//     }
// }



// Program for pattern generation 
/*
*
* *
* * *
* * * *
* * * * * 
* * * *
* * *
* *
*
*/

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int row, clm;
//     // incrementing pattern 
//     for(row=1;row<=5;row++)
//     {
//         for(clm=1;clm<=row;clm++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
//     //decreamenting pattern
//     for(row=1;row<=4;row++)
//     {
//         for(clm=4;clm>=row;clm--)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }

// }


// // Code for pattern generation 
// /*
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// */

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int row , clm;
//     for(row=1;row<=5;row++)
//     {
//         for(clm=0;clm<row;clm++)
//         {
//             printf(" %d",row);
//         }
//         printf("\n");
//     }
// }

// // Code for pattern generation 
// /*
// 1
// 1 2 
// 1 2  3 
// 12 3  4 
// 12 3 4 5 
// */

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int row , clm;
//     for(row=0;row<=5;row++)
//     {
//         for(clm=1;clm<=row;clm++)
//         {
//             printf("%4d",clm);
//         }
//         printf("\n");
//     }
// }

// // Code for pattern generation 
// /*
// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5
// */

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int row , clm;

//     for (row=1;row<=5;row++)   //this for 11111 in first round print
//     {
//         for (clm=5;clm>=row;clm--)    //this for clm ratiow means 
//         {
//             printf("%4d",row);
//         }
//         printf("\n");
//     }
// }

// // Code for pattern generation 
// /*
// 5 5 5 5 5
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1
// */

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int row , clm;
//     for (row=5;row>=1;row--)   // this for print 555555 in row 
//     {
//         for(clm=1;clm<=row;clm++)   //this for loop of no 
//         {
//             printf("%4d",row);   //statement for which row or clm to be print
//         }
//         printf("\n"); //for next line
//     }
// }
