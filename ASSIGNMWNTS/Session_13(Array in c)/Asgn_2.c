/* Construct a single diamension array of string to find 
*list all elements with sub.
*find all strings starts with vowels
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>



void main()
{
    char str[300],a[300];
    int i,j,k=1;

    a[0]=' ';                           //here i assign space at 1st location
    printf("Enter a string here :-");
    gets(str);
    for(i=0;i<strlen(str);i++)   //
    {                           //
        a[i+1]=str[i];         //merging both here wd space is already initialize
    }
    // strcat(a,str);   ///concatenate to merge two array
    // puts(a);

    for(i=0;i<strlen(a);i++) //5   6 8
    {
        if(a[i]==' ')        //
        {
            i++;
            if(a[i]=='a'|| a[i]=='e'||a[i]=='i'|| a[i]=='o'||a[i]=='u'
            ||a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'||a[i]=='U')
            {
                printf("%d) ",k);
                for(j=i;j<strlen(a);j++)
                {
                    if(a[j]!=' ')
                    {
                        printf("%c",a[j]);
                       
                    }
                    else
                    {   
                        k++;
                        printf(" \n");
                        i=j-1;
                        break;
                    }
                }

                
            }
        }

    }
    
}