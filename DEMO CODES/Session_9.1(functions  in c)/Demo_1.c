// // // // Defining user defined functions 
// // // // Factorial of a no : n!=n x n-1 x n-2....1
// // // #include <stdio.h>
// // // #include<conio.h>

// // // // function prototype
// // // int facto(int);    //userr define function

// // // void main()
// // // {
// // // 	int n;
	
// // // 	printf("Enter a No :");
// // // 	scanf("%d",&n);
// // // 	printf("No is :%d \tFactorial :%d\n",n,facto(n));   //facto(n) is calling function value
	
// // // }


// // // // function body
// // // int facto(int n)  // then execution start to perform the function block
// // // {
// // // 	int f=1;
// // // 	while(n>0)
// // // 	{
// // // 		f*=n;
// // // 		n--;
// // // 	}
// // // 	return f;
// // // }


// // // Function to check given no is even or odd
// // #include<stdio.h>
// // #include<conio.h>

// // int numeven(int);

// // void main()
// // {
// //     int num;
// //     printf("Enter a number :-");
// //     scanf("%d",&num);

// //     if(numeven(num))
// //     {
// //         printf(" The no.:-%d is EVEN ",(num));
// //     }
// //     else
// //     {
// //         printf("The no.:-%d is NOT Even no.",num);
// //     }

// // }

// // int numeven(int(num))
// // {
// //     if(num%2==0)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return 0;
// //     }
// // }


// // Function to print 10 multiples of a given no 
// // 5 -- 5,10,15,20....50

// #include<stdio.h>
// #include<conio.h>

// void tablenum(int);

// void main()
// {
//     int num;
//     printf("Enter a number :-");
//     scanf("%d",&num);
//     tablenum(num);
// }

// void tablenum(int (num))
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf(" %d  *  %d  =  %d \n",num, i,(num*i));

//     }
// }


// Print your name for 20 times on the screen 
#include<stdio.h>
#include<stdio.h>

void name(char[]);

void main()
{
    char nm[10];
    printf("Enter your name :-");
    scanf("%s",&nm);
    name(nm);
}

void name(char(a[]))
{
    int i=1;
    // for(i=1;i<=20;i++)
    while(i<21)
    {
        printf(" %d .Your NAME is :-%s \n",i,a);
        i++;
    }
    
}