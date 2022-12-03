//2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string you want to check =");
    fgets(str,100,stdin);
    printf("String length of Enter = %s ",strrev(str));
    return 0;

}
