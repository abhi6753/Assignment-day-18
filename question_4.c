//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
void uppercase(char b[])
{
    int i;
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>=97&&b[i]<=122)
        {
            b[i] = b[i]-32;
        }
    }
}
int main()
{
    int i;
    char str[1000];
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    uppercase(str);
    printf("Upper case = %s",str);
    getch();
    return 0;
}