#include<stdio.h>
#include<math.h>
int main()
{
float yp,yq,xp,xq,m,angle;
printf("enter yq, yp, xq, xp:");
scanf("%f %f %f %f",&yq, &yp, &xq, &xp);
m=(yq-yp)/(xq-xp);                             //slope of line
printf("slope of line is=%.2f\n",m);
angle =atan(m)*180/3.14;                       //we multiply 180/3.14 to atan(m) because atan(m) in radian  so to convert 
printf("angle=%f",angle);                        // into angle we multiply by 180/3.14


}
