// input element you want to delete and delete all the occurance of the element in the array.(array parctice question 21.)
#include <stdio.h>
int main()
{

    int n, i, ele = 0, j, f = 0;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element in ararry:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the element you want to delete:");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (ele == a[i])
        {
            f = 1;
            for (j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
    }
    if (f != 0)
    {
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    else
        printf("element not found:");
}
