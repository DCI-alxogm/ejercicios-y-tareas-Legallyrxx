#include <stdio.h>
#include <math.h>
 
int main() {
    double x, fin, espaciado;
 
    printf("Número de inicio: ");
    scanf("%lf", &x);
    printf("Número de final: ");
    scanf("%lf", &fin);
    printf("Espaciado: ");
    scanf("%lf", &espaciado);
 
    while (x <= fin) {
        double log_x, sqrt_x;
        
        // Usamos if en lugar del operador ternario
        if (x > 0) {
            log_x = log(x);
        } else {
            log_x = 0;
        }
        
        if (x >= 0) {
            sqrt_x = sqrt(x);
        } else {
            sqrt_x = 0;
        }
 
        printf("x = %.2f, exp = %.2f, log = %.2f, sin = %.2f, cos = %.2f, sqrt = %.2f\n",
               x, exp(x), log_x, sin(x), cos(x), sqrt_x);
        x += espaciado;
    }
 
    return 0;
}
