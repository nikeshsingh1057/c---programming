  // find the position of substring in string.  (my sir g.com youtube)
  
#include<stdio.h>
#include<string.h>
int main()
{
   char s[100],st[100]; int i,j,k,c;
   gets(s);
   gets(st);
   for(i=0;i<=(strlen(s)-strlen(st)+1);i++)
   {
       c=0;
       k=i;
       for(j=0;j<strlen(st);j++)
       {
           if(s[k]!=st[j])
               break;
               else
               c++;   // length of substring
           k++;
       }
       if(c==strlen(st))
       printf("%d ",i);
   }
}
