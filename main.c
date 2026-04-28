#include <stdio.h>
#include "sumar.h"
int main(int arcg, char const * argrv[])

{
int a, b;
printf("ingresa primer numero ");
scanf("%d", &a);


printf("ingresa segundo numero ");
scanf("%d", &b);

printf("la suma es : %d", sumar(a,b));

return 0;

}