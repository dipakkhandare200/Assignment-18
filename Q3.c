//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the 1st string you want to compare it =");
    fgets(str1,100,stdin);
    printf("Enter the 2nd string you want to compare it =");
    fgets(str2,100,stdin);
   int  value=strcmp(str1,str2);
   if(value==0)
    {
    printf(" Enter String is same" );
    }
   else
        printf(" Enter String is not same" );

    return 0;

}
