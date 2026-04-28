#include <stdio.h>
#include "sumar.h"
#include "restar.h"

#include "dividir.h"

#include "multiplicar.h"

int main(int arcg, char const * argrv[])

{
int a, b;
printf("ingresa primer numero ");
scanf("%d", &a);


printf("ingresa segundo numero ");
scanf("%d", &b);

printf("la suma es : %d \n", sumar(a,b));

printf("la resta es : %d \n ", restar(a,b));

printf("la division es : %d\n", dividir(a,b));

printf("la multiplicacion es : %d\n", multiplicar(a,b));

return 0;

}