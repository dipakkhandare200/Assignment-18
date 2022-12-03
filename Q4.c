//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string you want in uppercase =");
    fgets(str,100,stdin);
    printf("String you Enter in uppercase =%s",strupr(str));
    return 0;

}
