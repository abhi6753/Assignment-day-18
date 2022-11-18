//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int Strcmp(char str2[],char a[])
{
   int i,d;
   for(i=0;i<strlen(str2)-1;i++)
   {
      if(str2[i]==a[i])
      {
         d=0;
         continue;
      }  
      else
      {
         if(a[i]>str2[i])
         {
            return d=1;
         }   
         else
         {
            return d= -1;
         }       
      }
   }
   return d;
}
int Strrev(char a[])
{
   char str2[strlen(a)];
   strcpy(str2,a);
   int i,j=strlen(str2)-2;
   for(i=0;i<strlen(str2)-1;i++)
   {
      if(i<j)
      {
         char temp = str2[i];
         str2[i]=str2[j];
         str2[j]=temp;
      }
      j--;
   }
   return Strcmp(str2,a);
}
int palindrome(char a[])
{
   return Strrev(a);
}
int main()
{
   int len = 1000;
   char str[len];
   printf("Enter your string:\n");
   fgets(str,len,stdin);
   if(palindrome(str)==0)
   {
      printf("Palindrome string");
   }
   else
   {
      printf("It is not Palindrome string");
   }
   getch();
   return 0;
}