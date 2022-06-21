//copy one string to another.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];int l;
    printf("enter string1:");
    gets(str1);
    printf("enter string2:");
    gets(str2);
    strcpy(str1,str2);
    puts(str1);
}
