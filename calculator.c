#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    system("cls");
  int a;

  printf("Leap year\n");
  printf("-----------------------\n");


 printf("enter a numebr\n");
 scanf("%d", &a);


 if ((a % 400 ==0 ) || (a % 4 ==0) && (a % 100 != 0)) 
 printf("It is leap year");
 else printf("It is not a leap year");


  
  
  



}