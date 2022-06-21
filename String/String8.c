//count frequency of each element in string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int f[26] = {0};
    int i;
    printf("enter string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        f[str[i]-97]++;
        else if(str[i]>='A'&& str[i]<='Z')
         f[str[i]-65]++;
    }
        for(i=0;i<26;i++)
        {
          if(f[i]!=0)
          printf("%c of %d times\n",i+97,f[i]);
        }
}

