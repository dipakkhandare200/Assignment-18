//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int temp=0;
    printf("Enter the string =");
    fgets(str,100,stdin);
    int c=strlen(str);
    for(int i=0;i<c;i++)
    {
       if(str[i]!=str[c-i-1])
       {
           int temp=1;
           break;
       }
    }
    if(temp==0)
    {
        printf("\n Enter string is palindrome");
    }else
    {
     printf("\n Enter string is not palindrome");
    }

    return 0;

}
