// remove last occurance ofelement from string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], ch;
    int i, j, k;
    printf("enter string:");
    gets(str);
    printf("enter element want to delete:");
    scanf("%c", &ch);
    for (i = strlen(str) - 1; i >= 0; i--)  // loop ulta chalayange length nikale ke.

        if (str[i] == ch)
        {
            for (k = i; str[k] != '\0'; k++)
            {
                str[k] = str[k + 1];
            }

            break;
        }

    puts(str);
}
