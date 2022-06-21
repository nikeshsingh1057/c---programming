//  frequency of all element in array in array or count total no of dublicate element in array.(array question no . 25)
#include<stdio.h>
int main(){

    int n,i,j,count; int f[100]={0};
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];                                   // note n should less than 100. n<100
    printf("enter %d element in ararry:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)     // to print original array.
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {    count=0;
        if(f[i]==0)       
      {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
             count++; 
             f[j]=-1;
            }  
        }
        printf("array of %d of %d times\n",a[i],count); //to print dublicate element in array.
      }
    } 
 }
