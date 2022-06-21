// sum of row and column in two matrix.
#include <stdio.h>
int main()
{
    int i, j, n, m, k=0,c,s;

    printf("enter order of matrix ie m and n:");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("enter %d element in matrix:", m * n);
    for (i = 0; i < m; i++) // for row
    {
        for (j = 0; j < n; j++) // for column
            scanf("%d", &a[i][j]);
    }
    for(i=0;i<m;i++)
    {   s=0;
        for(j=0;j<n;j++)
        s=s+a[i][j];
        printf("sum of row %d is %d\n",i+1,s);
    }
        for(j=0;j<n;j++)
    {   c=0;
        for(i=0;i<m;i++)
        c=c+a[i][j];
        printf("sum of column %d is %d\n",j+1,c);
    }
}
