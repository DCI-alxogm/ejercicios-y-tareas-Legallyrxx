// Jerarquía de operaciones con números flotantes
#include <stdio.h>
 
int main() {
    double a, b, c, d;
    double e1, e2, e3, e4;
 
    // Solicitar valores desde la terminal
    printf("Introduce el valor de a: ");
    scanf("%lf", &a);
    printf("Introduce el valor de b: ");
    scanf("%lf", &b);
    printf("Introduce el valor de c: ");
    scanf("%lf", &c);
    printf("Introduce el valor de d: ");
    scanf("%lf", &d);
 
    // Realizar operaciones
    e1 = (a + b) * c / d;
    e2 = ((a + b) * c) / d;
    e3 = (a + b) * (c / d);
    e4 = a + b * c / d;
 
    // Mostrar los resultados
    printf("e1 = (a+b)*c/d = %f\n", e1);
    printf("e2 = ((a+b)*c)/d = %f\n", e2);
    printf("e3 = (a+b)*(c/d) = %f\n", e3);
    printf("e4 = a+b*c/d = %f\n", e4);
 
    return 0;
}
