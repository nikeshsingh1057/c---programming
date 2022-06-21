#include <stdio.h>
int main()
{
    float b, HRA, TA, s;
    printf(" enter value basic pay = ");
    scanf("%f", &b);
    HRA = 15.0 / 100 * b;
    printf(" employee get HRA = %.2f\n ", HRA);
    TA = 20.0 / 100 * b;
    printf("employee get TA = %.2f\n ", TA);
    s = HRA + TA + b;                        //S IS TOTAL SALERY OF EMPLOYEE   
    printf("total salery of employee = %.2f ", s);
    // s=15.0/100*b + 20.0/100*b +b;
    // printf("total salery :%f",s);          // method 2
}
