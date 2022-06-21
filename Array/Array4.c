// delete dublicate element from array.
#include<stdio.h>
int main(){
    int a[100]; int i,j,k,n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter %d element in array",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        { 
            for(j=i+1;j<n;j++)        
            {
                if(a[i]==a[j])
                {
                    for(k=j;k<n;k++)      //this loop for over write the value at place of dublicate element.
                        a[k]=a[k+1];
                        
                  n--;             //for reducing size if we not do it then it will print upto n size.    
                  j--;
                }
            }
        }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}
