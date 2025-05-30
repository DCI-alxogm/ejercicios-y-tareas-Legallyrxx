#include <stdio.h>
 
// Función con argumento de entrada pero sin salida
void cuadradoEntrada(int x) {
    printf("El cuadrado de %d es %d\n", x, x * x);
}
 
int main() {
    int numero = 5;
    cuadradoEntrada(numero);
    return 0;
}
