//5. Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string IN UPPERCASE you want convert in lowercase =");
    fgets(str,100,stdin);
    printf("String you Enter in lowercase =%s",strlwr(str));
    return 0;

}
