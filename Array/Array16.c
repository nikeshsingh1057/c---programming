// find average of 2d array and also print array in matrix form.
#include <stdio.h>
int main()
{
    int i, j, s = 0, n, m;
    float avg = 0;
    printf("enter order of matrix ie m and n:");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("enter %d element in matrix:", m * n);
    for (i = 0; i < m; i++)  // for row
    {
        for (j = 0; j < n; j++) // for column
        {
            scanf("%d", &a[i][j]);
            s = s + a[i][j];
        }
    }
    avg = s*1.0 / (m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("sum=%d and average = %f", s, avg);
}
