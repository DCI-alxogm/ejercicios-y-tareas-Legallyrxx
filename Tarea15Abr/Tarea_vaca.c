#include <stdio.h>
 
int main() {
    int masa, altura;
    float energia;
    const float g = 9.81; // Aceleración de la gravedad (m/s^2)
 
    printf("Calculadora de Energia Potencial Gravitacional\n\n");
 
    printf("Dame la masa del objeto en kilogramos: ");
    scanf("%d", &masa);
 
    printf("Dame la altura en metros: ");
    scanf("%d", &altura);
 
    energia = masa * g * altura;
 
    printf("\nLa energia potencial gravitacional es: %.2f Joules\n", energia);
 
    return 0;
}
