// most frequent  element in array.(occor many times.)
#include <stdio.h>
int main()
{

    int n, i, maxcount = 0, j, count, ele = 0;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element in ararry:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                maxcount = count;
            }

            if (count > maxcount - 1)
            {
                ele = a[i];
            }
        }
    }
    printf("most frequent element in array %d", ele);
}
