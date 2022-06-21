//calculate electric unit charge and the total electricity bill .
#include<stdio.h>
int main()
{
    int unit;
    float bill,ch,amt;
    printf("bill in units:");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill= unit*0.50;
    
    }
    else if(ch<=150)
    {
        bill=25+(unit-50)*0.75;
    
    }
    else if(ch<=250)
    {
        bill= 100+(unit-100)*1.20;
        
    }
    else
    {
        bill=220+(unit-150)*1.50;
        
    }
    ch= bill*0.20;
    amt=ch +bill;
    printf("charge=%f",amt);
}
