#include <stdio.h>
int main()
{
    float g, r;
    printf("iteams  total price\n");
    printf("mango   rs 52.5\n");
    printf("potato  rs 25\n");
    printf("apple   rs 100\n");
    printf("tomato  rs 15\n");
    g = 52.5 + 25 + 100 + 15;   // money given to shopkeeper
    r = 500 - g;                //return money to mr x
    printf("shopkeeper return money:%f",r);
}
