//calculate area of triangle using hreions formula.
#include<stdio.h>
int main()
{
    

    float a,b,c,s, A;
    printf("enter three side of triangle:");
    scanf("%f %f %f",&a, &b,&c);
    s= (a+b+c)/2;
    A= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is:%f",A);
    return 0;
}
