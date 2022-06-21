//c programming to reverse a number.
#include <stdio.h>
int main()
{
    int n, reverse = 0;
    printf("before reverse :");
    scanf("%d", &n);
    while (n != 0)
    {

        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n / 10;
    }
    printf("after reverse: %d", reverse);
    return 0;
}
