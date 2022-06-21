// input position of array you want to delete ( question no. 19 array sheet.).
#include <stdio.h>
int main()
{

    int n, i, pos, m;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element in ararry:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the position you want to delete:");
    scanf("%d", &pos);
    m = a[pos - 1];
    if (pos >= 0 && pos <= n)
    {
        for (i = pos - 1; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        printf("deleted element is %d\n", m);
        for (i = 0; i < n - 1; i++)
            printf("%d ", a[i]);
    }
    else
        printf("delete is not possible:");
}
