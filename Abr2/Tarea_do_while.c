#include <stdio.h>

int main() {
    int inicio, final;
    printf("Introduce el número de inicio: ");
    scanf("%d", &inicio);
    printf("Introduce el número final: ");
    scanf("%d", &final);
    printf("Los números primos entre %d y %d son:\n", inicio, final);
    int i = inicio;
    do {
        int esPrimo = 1;
        if (i <= 1) {
            esPrimo = 0;
        } else {
            // Verificar si el número es divisible por algún otro número
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    esPrimo = 0; // No es primo si es divisible por otro número
                    break; // Salir del ciclo si encontramos un divisor
                }
            }
        }
        if (esPrimo) {
            printf("%d ", i);
        }
        i++;
    } while (i <= final);
    printf("\n");
    return 0;
}


