//copy of one string to another 2nd method.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int i;
    printf("enter string1:");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
    puts(str2);
}
