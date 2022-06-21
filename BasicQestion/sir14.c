#include <stdio.h>
int main()
{
    float c1, c2, c3, c4, c5, g1, g2, g3, g4, g5,SPI;
    printf("enter value of c1 c2 c3 c4 c5:");
    scanf("%f%f%f%f%f", &c1, &c2, &c3, &c4, &c5);
    printf("enter value of g1 g2 g3 g4 g5:");
    scanf("%f%f%f%f%f", &g1, &g2, &g3, &g4, &g5);
    SPI = (c1 * g1 + c2 * g2 + c3 * g3 + c4 * g4 + c5 * g5) / (c1 + c2 + c3 + c4 + c5);
    printf("SPI =%f", SPI);
}
