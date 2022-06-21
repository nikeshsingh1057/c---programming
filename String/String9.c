//frequency of all characters in given string 2nd method.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int f[127] = {0};
    int i, ascii;
    printf("enter string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        ascii = (int)str[i];
        f[ascii]++;
    }
    printf("frequency of all characters in given string:\n");
    for (i = 0; i < 127; i++)
    {
        if (f[i] != 0)
        {
            printf("'%c'=%d\n",i,f[i]);
        }
    }
}
