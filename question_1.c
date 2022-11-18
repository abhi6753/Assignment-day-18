//1. Write a function to calculate length of the string.
#include<stdio.h>
#include<conio.h>
#define SIZE 1000
int strLen(char b[])
{
    int i,count=0;
    for(i=0;b[i];i++)
    {
        ++count;
    }
    return count-1;
}
int main()
{
    char str[SIZE];
    printf("Enter your string:\n");
    fgets(str,SIZE,stdin);
    printf("Length of string is %d",strLen(str));
    getch();
    return 0;
}