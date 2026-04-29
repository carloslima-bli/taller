#include <stdio.h>
#include "sumar.h"
#include "resta.h"

int main()
{
    int a,b;
    printf("ingrese 1er numero: ");
    scanf("%d", &a);
    printf("ingrese 2do numero: ");
    scanf("%d", &b);
    printf ("\nla suma es: %d\n", sumar(a,b));
    printf("La resta es: %d",resta(a,b));   
    return 0;
}