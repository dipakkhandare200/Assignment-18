//Write a function to count words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter the long string =");
    fgets(str,100,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=' '&& str[i+1]!=' ')
        count++;
    }
    printf("\n words in the string = %d",count);
    return 0;

}
