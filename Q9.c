//Write a function to reverse a string word wise.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the long string =");
    fgets(str,100,stdin);
    int c=strlen(str);
    for(int i=c-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[i]='\0';
            printf("%s",&str[i]+1);
        }

    }
    printf(" %s",str);

    return 0;

}

