// enter the element you wnant to insert in array up to user choice.
#include <stdio.h>
int main()
{
    int a[100], pos, ele, i, n, j;
    printf("enter element in array up to 99:");
    scanf("%d", &n);
    printf("enter %d element in array:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (j = 1; j < 100; j++)
    {
        printf("enter position and element you want to insert:");
        scanf("%d%d", &pos, &ele);
        if (pos < n)
        {
            for (i = n; i >= pos; i--)
                a[i] = a[i - 1];
            n++;
            a[pos - 1] = ele;

            for (i = 0; i < n; i++)
                printf("%d\t", a[i]);
        }
        else
            printf("not possible");
        printf("\n");
    }
}
