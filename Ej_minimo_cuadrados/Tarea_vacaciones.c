#include <stdio.h>
int main() {
    float x0, v, xf, t;
    printf("Calculadora de tiempo en MRU\n\n");
    printf("Dame la posicion inicial (x0): ");
    scanf("%f", &x0);
    printf("Dame la velocidad (v): ");
    scanf("%f", &v);
    printf("Dame la posicion final (xf): ");
    scanf("%f", &xf);
    t = (xf - x0) / v;
    printf("\nEl tiempo que tarda en llegar es: %.2f segundos\n", t);
    return 0;
}
