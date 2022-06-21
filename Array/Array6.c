//  find second max element in array.
#include<stdio.h>
int main(){
    int i,max,smax,n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in array:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    smax=a[1];
    if(a[0]>a[1])
    {
        max=a[0];
        smax=a[1];
    }
    else
    smax=a[0];
    max=a[1]; 
    for(i=2;i<n;i++)
    {
      if(a[i]>max)
      {
        smax=max;
        max=a[i];
      }
      else
      smax=a[i];
    }   
    printf("second max is %d and max is %d",smax,max);
}
