//swap largest at smallest place and smaller at largest palce in array
#include<stdio.h>
int main(){

    int n,i,min=0,max=0,maxp=0,minp=0,tem;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in ararry:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    //maxp=0;
    //minp=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
         max=a[i]; //this is mendadatory because to update value
         maxp=i; //max index.
        }
        if(a[i]<min)
        {
        min=a[i];  // this is mendadatory because to update value.
        minp=i; //minimum index.
        }

    }
    tem=a[maxp];       //minp = minimum position.
    a[maxp]=a[minp];     
    a[minp]=tem;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);  // it swap max at min and min at max and print.
}
