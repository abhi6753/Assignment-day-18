//3. Write a function to compare two strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,a;
    int len=1000;
    char str1[len];
    char str2[len];
    printf("Enter first string:\n");
    fgets(str1,len,stdin);
    printf("Enter second string:\n");
    fgets(str2,len,stdin);
    for(i=0;i<strlen(str1)-1;i++)
    {
        if(str1[i]==str2[i])
        {
           a=0;
           continue;
        }  
        else
        {
            if(str1[i]>str2[i])
            {
                a=1;
                break;
            }   
            else
            {
                a= -1;
                break;
            }       
        }
    }
    if(a==0)
     printf("\n%s is equal to %s",str1,str2);
    else if(a>0)
     printf("\n%s is greater than %s",str1,str2);
    else if(a<0)
     printf("\n%s is less than %s",str1,str2);
    getch();
    return 0; 
}