// que- input salery calculat basic and hra on salery

#include<stdio.h>

int main()
{
    int s;
    float g;
    printf("enter salery");
    scanf("%d",&s);
    if(s<=10000)
    {
        g= s+(20/100.0)*s+(80/100.0)*s;
        //printf("%f",g);
    }
    else if(s<=20000)
    {
        g= s+(25/100.0)*s+(90/100.0)*s;
        //printf("%f",g);
    }
    else
    {
        g= s+(30/100.0)*s+(95/100.0)*s;
        //printf("%f",g);
    }
     printf("%f",g);

}
