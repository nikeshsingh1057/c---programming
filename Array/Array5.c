// input array element and find standard deviation.

#include <stdio.h>
#include <math.h>
int main()
{
  int i, n, sum = 0;
  float avg=0, st = 0;
  printf("enter size of array:");
  scanf("%d", &n);
  int a[n];
  printf("enter %d element in array:", n);
  for (i = 0; i < n; i++)
  {  
    scanf("%d", &a[i]);
    sum=sum+a[i];
  }   
  avg = sum / n;
  for (i = 0; i < n; i++)
  {
    st = st + pow((avg - a[i]), 2);
  }
  st = st / n;
  st = sqrt(st);
  printf("standard deviation is = %f and sum %d ",st,sum);

}
