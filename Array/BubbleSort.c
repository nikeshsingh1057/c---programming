// shorting of array. in assendeing order.   ( Bubble sort )
#include<stdio.h>
int main(){

    int n,i,min=0,max=0,maxp,minp,tem,j;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element in ararry:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)     // to print original array.
    printf("%d ",a[i]);
    printf("\n");
    for(i=1;i<n;i++) // for number of passes.
     {
            for(j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])  //this will print in asinding order. if we change it to left shift it print desinding order.
                {
                    tem=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tem;
                }
            }
     }
     for(j=0;j<n;j++)
     printf("%d ",a[j]);
}
