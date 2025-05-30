#include <stdio.h>
 
// Esta función recibe un número y muestra su cuadrado (no devuelve nada)
void cuadradoEntrada(int x) {
    int resultado = x * x;
    printf("El cuadrado de %d es %d\n", x, resultado);
}
 
int main() {
    int numero = 5;
    cuadradoEntrada(numero);
    return 0;
}
