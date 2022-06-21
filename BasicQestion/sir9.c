#include<stdio.h>
int main()
{
    long long int a;            // we do not use int because mobile number is very large interger so it become out of range of int.
    printf("enter mob no.:");
    scanf("%lld",&a);
    printf("mobile no: %lld",a);
}
