#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter side of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    printf("triangle is equilatoral");
    else if(a==b&&a!=c || b==c&&b!=a || a==c&&a!=b)
    printf("triangle is isosceles");
    else
    printf("triangle is sclence");

}
