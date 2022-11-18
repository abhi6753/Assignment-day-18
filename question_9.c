//9. Write a function to reverse a string word wise. (For example if the given string is\
“Mysirg Education Services” then the resulting string should be “Services Education Mysirg”)
#include<stdio.h>
#include<conio.h>
#include<string.h>
void strRev(char str1[])
{
    int i =0;
    int j = strlen(str1)-2;
    while(i<j)
    {
        char temp = str1[i];
        str1[i]= str1[j];
        str1[j] = temp;
        i++;
        j--;
    }
}
void Reverse_word(char str1[])
{
    int i=0;
    int j;
    while(str1[i])
    {
    	for(j=i;((str1[j]!=32)&&(str1[j]!='\0'));j++);
		int k=i;
		int l=j-1;
		while(k<l)
		{
            if(str1[l]==10)
            {
                l--;
                continue;
            }    
			char temp=str1[k];
			str1[k]=str1[l];
			str1[l]=temp;
			k++;
			l--;			
		}
		if(str1[j])
		{
			i=j+1;
		}
		else
		break;
	}
}
int main()
{
	char str[100];
	printf("Enter string:\n");
	fgets(str,100,stdin);
	char str1[strlen(str)];
	strcpy(str1,str);
    Reverse_word(str1);// hi Abhishek --> ih kehsihbA
    strRev(str1); // hi Abhishek --> Abhishek hi
	printf("%s",str1);
	getch();
	return 0;
}