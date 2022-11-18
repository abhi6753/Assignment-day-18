//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,count;
    char str1[100];
    printf("Enter string:\n");
    fgets(str1,100,stdin);
    char str[strlen(str1)];
    strcpy(str,str1);
    strlwr(str);
    printf("Repeated character is:\n");
    for(i=0;i<str[i];i++)
    {
        count =1;
        for(j=i+1;j<str[j];j++)
        {
            if(str[i]==str[j]&&str[j]!=' ')
            {
                count++;
                str[j]='0';
            }
        }
        if(count>1 &&str[i]!='0')
          printf("%c\n",str[i]);
    }
    getch();
    return 0;
}