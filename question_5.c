//5. Write a function to transform a string into lowercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
void lowercase(char b[])
{
    int i;
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>=65&&b[i]<=90)
        {
            b[i] = b[i]+32;
        }
    }
}
int main()
{
    char str[1000];
    int i;
    printf("Enter string to convert into lowerCase:\n");
    fgets(str,1000,stdin);
    lowercase(str);
    printf("Lower case:\n%s",str);
    getch();
    return 0;
}