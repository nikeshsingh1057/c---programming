//print upper trangular  element of matrix.
#include <stdio.h>
int main()
{
    int i, j, n, m, k = 0, c, s;

    printf("enter order of matrix ie m and n:");
    scanf("%d%d", &m, &n);
    int a[m][n];
    if (m == n)
    {
        printf("enter %d element in matrix:", m * n);
        for (i = 0; i < m; i++) // for row
        {
            for (j = 0; j < n; j++) // for column
                scanf("%d", &a[i][j]);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || i>j)    // if we do i>j || i==j it print lower triangle.
                    printf("%d\t", a[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
        }
    }
    else
    printf("it is not square matrix:");
}
