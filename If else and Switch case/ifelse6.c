#include<stdio.h>
int main()
{   
    int p,c,b,m,co;
    float percent;
    printf("enter five subject:");
    scanf("%d%d%d%d",&p,&c,&b,&m,&co);
    percent=(p+c+b+m+c)/5.0;
    if(percent>=90)
    printf("grade a");
    else if(percent>=80 && percent<=90)
    printf("grade b");
    else if(percent>=70 && percent<=80)
    printf("grade c");
    else if(percent>=60 && percent<=70)
    printf("grade d");
    else if(percent>=40 && percent<=60)
    printf("grade e");
    else if(percent<40)
    printf("grade f");

}
