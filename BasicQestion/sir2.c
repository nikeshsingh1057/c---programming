#include<stdio.h>
int main()
{
    float h=169, w=56;   //height in cm weight in kg
    h=(h*0.3937)/12;     //height in feet
    w=w*2.20462;         //weight in pound
    printf("hieght in feet= %f\nweight in pound= %f",h,w);


}
