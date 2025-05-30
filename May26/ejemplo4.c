#include <stdio.h>
 
// Función con salida pero sin entrada
int cuadradoFijo() {
    int numero = 6;
    return numero * numero;
}
 
int main() {
    int resultado = cuadradoFijo();
    printf("El cuadrado del número fijo es %d\n", resultado);
    return 0;
}
