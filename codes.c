#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{



    
    system("cls");
    float p,n,r,tds,si,f;
    printf("Enter the principle amount:\n");
    scanf("%f,&p);
    printf("Enter the rate of interest \n");
    scanf("%f", &r);
    si = (p * r * n)/100;
    tds = 10 * si/100;
    f = p + si - tds;
    printf("The simple interest is = %g\n", si);
    printf("The tds is = %g, tds\n");
    printf("The final amount after tax deduction is = %g\n",f);





}