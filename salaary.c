#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    system("cls");
  float a,b;
  int choice;
  printf("Menu Driven Calculator\n");
  printf("-----------------------\n");


  printf("Enter a: ");
  scanf("%f", &a);
  printf("Enter b: ");
  scanf("%f", &b);
  printf("What do you wanna do?\n");
  printf(" 1 for add\n 2 for subtract\n 3 for divide\n 4 for multiply: ");
  scanf("%d", &choice);

  if(choice == 1)
  {
    printf("The sum is = %.2f", a+b);
  }
  else if (choice == 2)
  {
    printf("The subtract is = %.2f", a-b);
  }
  else if (choice == 3)
  {
    printf("The division = %.2f", a/b);
  }
  else
  {
    printf("The multiplication is = %.2f", a * b);
  }
  
  
  



}