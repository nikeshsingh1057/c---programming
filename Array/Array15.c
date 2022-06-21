// enter element in array and delete if there is perfect number from array. 
#include <stdio.h>
int main()
{
    int a[100], s, i, n, j, m, k = 0, l;
    printf("enter element in array up to 99:");
    scanf("%d", &n);
    printf("enter %d element in array:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        m = a[i];
        s = 0;
        for (j = 1; j < m; j++)
        {
            if (m % j == 0)
                s = s + j;
        }
        if (s == a[i])
        {
            for (k = i; k < n; k++)
                a[k] = a[k + 1];
            n--;
            i--;
        }
    }
    for (l = 0; l < n; l++)
        printf("%d\t", a[l]);
}
