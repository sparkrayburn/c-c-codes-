#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    system("cls");

   float p,n,r,si,tds,f;
    printf("enter the principle\n");
    scanf("%f",&p);
    printf("Enter the years \n");
    scanf("%f",&n);
    printf("Enter the rate of interest \n");
    scanf("%f",&r);
    
    si = (p * r * n)/100;
    tds = 10 * si/100;
    f = p + si - ;


    printf("The simple interest = %g\n",si);
    printf("The total amount = %.2f",f);

}