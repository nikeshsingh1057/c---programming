// mark of section b student based on section a student.(array question no. 29)
#include <stdio.h>
int main()
{
    int a[5] = {0}, b[5] = {0}, i;
    printf("enter mark of 5 student in section a:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    printf("mark of section b student :\n");
    for (i = 0; i < 5; i++)
        printf("%d ", b[i]);
}
