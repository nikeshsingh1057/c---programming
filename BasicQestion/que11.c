// calculate sum of last four digit no.
#include <stdio.h>
int main()
{

    int a = 65192, r1, r2, r3, r4;
    r1 = a % 10; //     remainder=2
    a = a / 10;  //      quotient=6519
    r2 = a % 10; //       remainder=9
    a = a / 10;  //       quotient=651
    r3 = a % 10; //      remainder=1
    a = a / 10;  //      quotoient=65
    r4 = a % 10; //    remainder=5
    printf("r1=%d r2=%d r3=%d r4=%d\n", r1, r2, r3, r4);
    printf("%d", r1 + r2 + r3 + r4);
}
