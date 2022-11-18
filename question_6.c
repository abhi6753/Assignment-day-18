//6. Write a function to check whether a given string is an alphanumeric string or not.\
(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<conio.h>
#include<string.h>
short N,A; //N for numeric and A for alphabet , it is used like an indicator
int check_alphaNumeric(char b[])
{
    int i=0,j;
        if(((b[i]>=65&&b[i]<=90)||(b[i]>=97&&b[i]<=122)))
        {
            for(j=i+1;j<strlen(b)-1;j++)
            {
                if(b[j]>=48 && b[j]<=57)
                {
                    N=1;
                    continue;
                }
                else if(((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122)))
                    continue;
                else
                    return 0;
            }
            return 1;
        }
        else if(b[i]>=48&&b[i]<=57)
        {
            for(j=i+1;j<strlen(b)-1;j++)
            {
                if((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122))
                {
                    A=1;
                    continue;
                }
                else if(b[j]>=48&&b[j]<=57)
                    continue;
                else
                    return 0;
            }
            return 1;
        }
        else
          return 0;
}
int main()
{
    char str[1000];
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    if((check_alphaNumeric(str))&&(N||A))
    {
        printf("Entered String is an alphanumeric");
    }
    else
       printf("Entered String is not an alphanumeric");
    getch();
    return 0;
}

