#include <stdio.h>

int main(void) {
    int miArreglo[10];
    int indice, residuo;

    for (indice = 0; indice < 10; indice = indice + 1) {
        printf("Ingresa el elemento %d del arreglo: ", indice);
        scanf("%d", &miArreglo[indice]);
    }

    printf("Valores impares multiplicados por 5\n");
    for (indice = 0; indice < 10; indice = indice + 1) {
        residuo = miArreglo[indice] % 2;
        if (residuo == 1) {
            printf("El elemento original es %d", miArreglo[indice]);
            miArreglo[indice] = miArreglo[indice] * 5;
            printf(" modificado es %d\n", miArreglo[indice]);
        }
    }
    return 0;
}