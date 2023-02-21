/* Construct a single diamension array of string to find 
*list all elements with sub.
*find all strings starts with vowels
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>



void main()
{
    char str[200],a[200];
    int x,y,k=1;

    a[0]=' ';            //for initialize zeroth position space
    printf("Enter any string here :-");
    gets(str);
    strupr(str);

    for(x=0;x<strlen(str);x++)        // this is for counting every charactor
    {
        a[x+1]=str[x];
    }                                //here we merge the two strings

    for(x=0;x<strlen(a);x++)        //
    {
        if(a[x]==' ')
        {
            x++;
            if(a[x]=='a'||a[x]=='e'||a[x]=='i'||a[x]=='o'||a[x]=='u'
            ||a[x]=='A'||a[x]=='E'||a[x]=='I'||a[x]=='O'||a[x]=='U')
            {
                printf("%d.]-",k);
                for(y=x;y<strlen(a);y++)
                {
                    if(a[y]!=' ')
                    {
                        printf("%c",a[y]);
                    }
                    else
                    {
                        k++;
                        printf(" \n");
                        x=y-1;
                        break ;
                    }
                }
                 
                
            }
        }
    }
    
    
}