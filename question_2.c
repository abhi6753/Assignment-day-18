//2. Write a function to reverse a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 1000
void reverse(char b[])
{
    int i;
    int j = strlen(b)-2;
    char temp;
    for(i=0;i<strlen(b)-1;i++)
    {
        if(i<j)
        {
            temp = b[i];
            b[i]=b[j];
            b[j]=temp;
            j--;
        }
    }
}
int main()
{
    char str[SIZE];
    printf("Enter your string:\n");
    fgets(str,SIZE,stdin);
    reverse(str);
    printf("After reverse:\n%s",str);
    getch();
    return 0;
}