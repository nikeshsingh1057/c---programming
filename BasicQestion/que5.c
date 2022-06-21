//convert meter in kelometer

#include <stdio.h>
int main()
{
    float m;
    float km;
    printf("enter the value in meter:");
    scanf("%f", &m);
    km = (m / 1000);
    printf("value in kelometer:%f", km);
    return 0;
}
