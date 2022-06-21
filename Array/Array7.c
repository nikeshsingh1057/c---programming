// input an element and search in array if found print posiion of elemenst (note question no 13 in assignment.)

#include<stdio.h>
int main(){

    int n,i,ele,f=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in ararry:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element you want to search:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        d=0;
        if(a[i]==ele)
        {
          f=1;
          printf("%d element found at position %d\n",ele,i+1);
        }
    }
    if(f==0)
    printf("element is not found:");
}
