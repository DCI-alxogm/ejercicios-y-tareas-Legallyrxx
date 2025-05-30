#include <stdio.h>
 
// Función con argumento de entrada y salida
int cuadrado(int x) {
    return x * x;
}
 
int main() {
    int numero = 4;
    int resultado = cuadrado(numero);
    printf("El cuadrado de %d es %d\n", numero, resultado);
    return 0;
}}
