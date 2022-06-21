#include<stdio.h>
int main(){
char ch ;
printf("enter value:");
scanf("%c",&ch);
if(ch>=65 && ch<=90||ch>=97 && ch<=124)

   printf("alphabate");
else if(ch>=48 && ch<=58)
   printf("digit");
   else
   printf("special charactor");
   
 //if(ch==65)

}
