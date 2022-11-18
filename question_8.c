//8. Write a function to count words in a given string.
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int word=0;
    int i,len=1000;
    char str[len];
    printf("Enter string:\n");
    fgets(str,len,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]==32)
        {
            if((str[i+1]>=65&&str[i+1]<=90)||(str[i+1]>=95&&str[i+1]<=122))
            word++;
        }
    }
    printf("%d words in given string.",word+1);
    getch();
    return 0;
}