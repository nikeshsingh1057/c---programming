#include <stdio.h>    // programme for finding square root and square.
int main()
{
    float a,b,c;
    printf("enter value of a,b:");
    scanf("%f%f", &a,&b);
    //root = sqrt(a);
    c=pow(a,b);
    printf("squar root of %.2f is: %.2f", a,c);
    return 0;
}
