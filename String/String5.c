//coparision of two string.
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
    for (i = 0; str1[i] != '\0' && str1[i] == str2[i]; i++)
    {

    }
    if(str1[i]==str2[i])
    printf("same");
    else
    printf("not same");
}
