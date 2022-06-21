#include<stdio.h>
int main()                                                
{
    int a,b, ch;
    printf("enter operator:");
    scanf("%d",&ch);
      printf("enter number:");
          scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: printf("%d",a+b);
        break;
        case 2: printf("%d",a-b);
        break;
        case 3: printf("%d",a*b);
        break;
        case 4: printf("%d",a/b);
        break;
        case 5: printf("%d",a%b);
        break;
        default: printf("invaled");
    }

}
