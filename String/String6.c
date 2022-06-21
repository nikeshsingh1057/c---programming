//find minimun frequency occurance in string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int f[127] = {0}, ascii, min;
    int i,in;
    printf("enter string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        ascii = (int)str[i]; // to convert into decimal we cast it with int and fix it right position in ascii flag f.
        f[ascii]++;          // all repeted chachater are stored in temporary flag f[127].
    }
    min = f[0];
    for (i = 0; i <= 126; i++)
    {
        if(f[i]!=0)
        {
         if (f[i] > min)
            min = f[i];
            in=i;
        }

    }
    printf("minimum frequency element %d and %c times:", min,in);
}
