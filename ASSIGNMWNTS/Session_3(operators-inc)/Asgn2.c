// 2. Read name , age ,height of a person , apply criteria for selection that is age should be in the range 18-
// 25 years and height should be >=5.4 
#include<stdio.h>
#include<conio.h>

void main()
{
    char nm[10];
    int age;
    float hgt;

    // read value from users
    printf(" Enter Your Name :- ");
    scanf("%s",&nm);
    
    printf(" Enter Your Age :- ");
    scanf("%d",&age);

    printf(" Enter Your HEIGHT :- ");
    scanf("%f",&hgt);

    if((age>=18 && age<=25)  &&  (hgt>=5.4))
    {
        printf("Entered   Detail is applicable for selection\n");

    }
    else
    {
        printf(" Enter valid criteria , It shouid be Applicable \n");
    }
        
    
    
    
    // { 
    //     printf("this HEIGHT is applicable for selection is :-%d\n",hgt);
    // }
    // else
    // {
    //     printf("plzz type applicable HEIGHT for selection\n");

    // }
printf("-----------------------------------\n");
printf(" thank youu for applying here ");



       
}