#include <stdio.h>

int main() {
    int inicio, fin, incremento;
    
    printf("Ingrese el valor inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el valor final: ");
    scanf("%d", &fin);

    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);

    do {
        printf("%d ", inicio);
        inicio += incremento;
    } while ((incremento > 0 && inicio <= fin) || (incremento < 0 && inicio >= fin));
    printf("\n");

    return 0;
}

