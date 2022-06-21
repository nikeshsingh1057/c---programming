#include<stdio.h>
int main()
{
    int i; char c; float f; 
    printf("enter value of int, char, float:");
    scanf("%d %c %f",&i,&c,&f);
    printf("value of int:\t%d\nvalue of char:\t%c\nvalue of float:\t%f",i,c,f);
}
//note while taking input in scanf we cannot write "%i%c%f" because while taking input if we press enter then enter is also a special charactor;
