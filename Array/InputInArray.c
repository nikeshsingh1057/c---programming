// taking input in array and print it.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in ararry",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
