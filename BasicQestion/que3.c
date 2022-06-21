//convert celcius into farengite
#include <stdio.h>
int main()
{
    float c;
    int a = 9, b = 5, d = 32;
    printf("enter tempreature in celcius:\n");
    scanf("%f", &c);
    printf("temprature in farenhiet:\n%f",c * a / b + d);
    return 0;
}
