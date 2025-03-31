#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("El número ingresado no es positivo. Ingrsa otro.\n");
        }
    } while (numero <= 0);
    printf("El número %d es positivo\n", numero);

    return 0;
}

