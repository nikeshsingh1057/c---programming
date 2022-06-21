//sum of matrix a and b;
#include <stdio.h>
int main()
{
    int i, j, n, m, k = 0, q, p;

    printf("enter order of matrix a and b:");
    scanf("%d%d%d%d", &m, &n, &p, &q);
    int a[m][n];
    int b[p][q];
    if (m == p && n == q)
    {
        printf("enter element in matrix a and b and each matrix contain %d element:", m * n);
        for (i = 0; i < m; i++) // for row
        {
            for (j = 0; j < n; j++) // for column
                scanf("%d%d", &a[i][j],&b[i][j]);
        }
        printf("matrix a is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            
                    printf("%d\t", a[i][j]);
            
            printf("\n");
        }
           printf("matrix b is\n");
          for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            
                    printf("%d\t", b[i][j]);
            
            printf("\n");
        }
        printf("sum of matrix a and b is:\n");
         for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                    printf("%d\t",a[i][j]+ b[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("addition is not possible:");
}
