//1. Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string you want to check =");
    fgets(str,100,stdin);
    printf("String length of Enter = %d ",strlen(str)-1);
    return 0;

}
