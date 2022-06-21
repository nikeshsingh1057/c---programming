//length of string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];int l;
    printf("enter string:");
    gets(str);
    l=strlen(str);
    printf("%d",l);
}
