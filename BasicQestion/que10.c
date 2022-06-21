#include<stdio.h>
int main()           //write a programme to swape a number 
{
int a,b,c;
printf("enter value of a and b:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("value of a is: %d \n \bvalue of b is: %d \n",a,b);
}
