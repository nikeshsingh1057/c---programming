//write a programme to find compound interest.
#include <stdio.h>
int main()
{

    float p, r, t, ci;
    printf("enter principal rate and time:");
    scanf("%f %f %f", &p, &r, &t);
    ci = p * pow((1+ r/100),t)-p;
    printf("compound interest:%f", ci);
    return 0;
}
