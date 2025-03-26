#include <stdio.h>
#include <math.h>
 
int main() {
    double inicio, x, fin, espaciado;
 
    printf("Número de inicio: ");
    scanf("%lf", &inicio);
    printf("Número de final: ");
    scanf("%lf", &fin);

 // Calcular y mostrar resultados
    for(x = inicio; x <= fin, x) {
        printf("%.2f", x);
        printf("%.2f", exp(x));
        
        if(x > 0) {
            printf("%.2f", log(x));
        } else {
            printf("No es un número\n");
        }
        
        printf("%.2f ", sin(x));
        printf("%.2f ", cos(x));
        
        if(x >= 0) {
            printf("%.2f\n", sqrt(x));
        } else {
            printf("No es un  número\n");
        }
    }
    
    return 0;
}
