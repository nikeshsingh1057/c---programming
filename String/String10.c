//remove all the extra space from string. 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],f[100];
 
    int i,j=0;
    printf("enter string:");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==' ' && str[i+1]==' ');  // ascii of space is 32.
        else
        f[j++]=str[i];
    }
    f[j]='\0';
    puts(f);
}
