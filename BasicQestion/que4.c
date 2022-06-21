//write a programme to calculate simple interest.
#include <stdio.h>
int main()
{
    float p, r, t, si=100;

    printf("enter principle:");
    scanf("%f", &p);
    printf("enter rate:");
    scanf("%f", &r);
    printf("enter time:");
    scanf("%f", &t);
    //si = (p * r * t)/100;
    printf("simple interest:%.2f",p*r*t/si);
    return 0;
}
