#include<stdio.h>
int main(){
    int f=0,h=0,fe=0,tw=0,te=0,fi=0,to=0,on=0,m=0;         //wrong programme to input amount and convert into notes.
    printf("enter amount:");
    scanf("%d",&m);
    
    if(m>=500)
    {
        f=m/500;
        m=m % 500;
    }
     if(m>=100)
    {
        h=m/100;
        m=m % 100;
    }
     if(m>=50)
    {
        fe=m/50;
        m=m%50;
    }

     if(m>=20)
    {

    tw=m/20;
    m=m%20;
    }
     if(m>=10)
    {
    te=m/10;
    m=m%10;
    }
     if(m>=5)
    {
        fi=m/5;
        m=m%5;
    }
     if(m>=2)
    {
        to=m/2;
        m=m%2;
    }
     if(m>=1)
    {
        on=m;
    }
    printf("500 notes= %d\n",f);
    printf("100 notes= %d\n",h);
    printf("50 notes= %d\n",fe);
    printf("20 notes= %d\n",tw);
    printf("10 notes= %d\n",te);
    printf("5 notes= %d\n",fi);
    printf("2 notes= %d\n",to);
    printf("1 notes= %d\n",on);

}
