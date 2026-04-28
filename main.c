#include "sumar.h"   
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    int resultado = sumar(a, b);
    printf ("La suma es: %d\n", resultado);
    return 0;
}