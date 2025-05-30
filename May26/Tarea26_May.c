#include <stdio.h>
 
// 1. Función sin argumentos de entrada ni salida
void mensaje() {
    printf("Hola, esta es una función sin argumentos de entrada ni salida.\n");
}
 
// 2. Función con argumento de entrada pero sin salida
void imprimeCuadrado(int x) {
    int cuadrado = x * x;
    printf("El cuadrado de %d es %d\n", x, cuadrado);
}
 
// 3. Función con argumento de salida pero sin entrada
int numeroAleatorio() {
    return 7; // Valor fijo como ejemplo
}
 
// 4. Función con argumento de entrada y salida (uso de apuntador)
void elevaAlCuadrado(int *num) {
    *num = (*num) * (*num);
}
 
int main() {
    // 1. Función sin argumentos
    mensaje();
 
    // 2. Función con entrada pero sin salida
    int valor = 5;
    imprimeCuadrado(valor);
 
    // 3. Función con salida pero sin entrada
    int aleatorio = numeroAleatorio();
    printf("Número aleatorio obtenido: %d\n", aleatorio);
 
    // 4. Función con entrada y salida
    int numero = 3;
    elevaAlCuadrado(&numero);
    printf("El cuadrado del número modificado por referencia es: %d\n", numero);
 
    return 0;
}
