#include <stdio.h>
float dividir(float a, float b) {
    if (b == 0) {
        printf("Error: no se puede dividir para 0\n");
        return 0;
    }
    return a / b;
}