// maximum and minimum number in array.

#include<stdio.h>
int main(){
    int n,i,min=0,max=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in ararry:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("max=%d min=%d",max,min);
}
