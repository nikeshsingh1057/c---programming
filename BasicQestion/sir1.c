#include<stdio.h>          //calculating original price after including  sale tax. 
int main()
{
float a,b,tax;
printf("enter original price:");
scanf("%f",&a);
printf("enter sale tax:"); 
scanf("%f",&b);
tax=b/100*a;
printf("net price including tax:%f",a+tax);
return 0;
}
