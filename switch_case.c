#include <stdio.h>
#include <stdlib.h>
int main()
{

    system("cls");
    int a,b,c;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    printf("Enter what do you wanna do?\n ");
    scanf("%d", &c);


    switch (c)
    {
    case 1:

        printf("a + b = %d", (a+b));

        break;
    case 2:

        printf("a - b = %d", (a-b));
        break;
    case 3:

        printf("a * b = %d", (a*b));
        break;
    case 4:

        printf("a / b = %d", (a/b)); 
        break;
    default:
        printf("why yo");
        break;
    }
 
}
