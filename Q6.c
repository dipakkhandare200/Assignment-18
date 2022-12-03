//Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string you want to check is alphanumeric or not =");
    fgets(str,100,stdin);
    if((str<'a'||str>'z')&&(str<'A'||str>'Z')&&(str<1||str>9))
    {
        printf("\n This is Alphanumeric");
    }else
    {
     printf("\n This is not Alphanumeric");
     }
    return 0;

}
