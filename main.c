/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int i=1, s=0, n;
  scanf ("%d", &n);
  while (i <= n)
    {
        s=s+4;
      if (s % 400 == 0 || s % 4 == 0 && s % 100 != 0)
     
     
      printf("%d ",s);
      i=i+4;
     
    }


	return 0;
    }
