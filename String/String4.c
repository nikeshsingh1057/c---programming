//concteration of string one another.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int i, j, k;
    printf("enter string1:");
    gets(str1);
    printf("enter string2:");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++);
    for(j=0;str2[j]!='\0';j++)
    str1[i++]=str2[j];
    str1[i]='\0';
    puts(str1);
}
