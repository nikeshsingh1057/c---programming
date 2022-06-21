// input the position of element you want to delete . every time ask positin to delete
#include <stdio.h>
int main()
{

    int n, i, pos, m, j, k;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element in ararry:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        printf("enter the position you want to delete:");
        scanf("%d", &pos);
        if (pos >= 0 && pos <= n)
        {
            for (j = pos - 1; j < n; j++)
                a[j] = a[j + 1];
            n--;

            for (k = 0; k < n - 1; k++) 
                printf("%d ", a[k]);
            printf("\n");
        }
        else
            printf("invalid position") :
    }
}
