// write to input an array of number of elements.left rotate this by r number of rotation and print.(array que. no- 22)
#include <stdio.h>
int main()
{
    int n, i, r = 0, temp;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element in array:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter r for left rotation:");
    scanf("%d", &r);
    for (i = r ; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
