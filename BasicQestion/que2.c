//calcluate area of circle and modify the same problem to calclute volume of cylinder of given radius and hieght.
#include <stdio.h>
int main()
{
    int r, h;
    float c = 3.14;
    printf("enter radius of circle\n& height of cylinder:");
    scanf("%d %d", &r,&h);
    printf("area of circle :%f\nvolumne of cylinder:%f\n",r*r*c, r * r * c*h);
    //printf("volumne of cylinder:%f\n",c*r*r*h);
    return 0;
}
