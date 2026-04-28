#include "sumar.h"
#include "restar.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    int resultado = sumar(a, b);
    printf ("La suma es: %d\n", resultado);
    int resultado_resta = restar(a, b);
    printf("La resta es: %d\n", resultado_resta);
    return 0;
}