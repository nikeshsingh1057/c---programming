// print matrix in ziz zage form(array question).
#include <stdio.h>
int main()
{
    int i, j, n, m, k=0;

    printf("enter order of matrix ie m and n:");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("enter %d element in matrix:", m * n);
    for (i = 0; i < m; i++) // for row
    {
        for (j = 0; j < n; j++) // for column
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
        }
        else
        {
            for (k = n - 1; k >= 0; k--)
                printf("%d\t", a[i][k]);
        }
        printf("\n");
    }
}
