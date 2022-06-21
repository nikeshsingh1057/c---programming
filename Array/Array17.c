// transpose of matrix ( qustion no 5 2d array.) 
#include <stdio.h>
int main()
{
    int i, j, s = 0, n, m;
    float avg = 0;
    printf("enter order of matrix ie m and n:");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("enter %d element in matrix:", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
     for (i = 0; i < m; i++)      // for printing original matrix
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("transpose of above matrix:\n");
     for (i = 0; i < m; i++)      // for printing transpose matrix.
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[j][i]);
        printf("\n");
    }

}
