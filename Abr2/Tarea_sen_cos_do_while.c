#include <stdio.h>
#include <math.h>

int main() {
    double inicio, final, espaciado, x;

    // Solicitar al usuario los valores de inicio, final y espaciado
    printf("Inicio: ");
    scanf("%lf", &inicio);
    printf("Final: ");
    scanf("%lf", &final);
    printf("Espaciado: ");
    scanf("%lf", &espaciado);

    if (espaciado <= 0) {
        printf("Espaciado debe ser mayor a 0.\n");
        return 1;
    }

    // Empezar el bucle do-while
    x = inicio;
    do {
        printf("\nx = %.2f\n", x);
        printf("Exp(x) = %.4f, Log(x) = %.4f, Sin(x) = %.4f, Cos(x) = %.4f, Sqrt(x) = %.4f\n", 
               exp(x), log(x), sin(x), cos(x), sqrt(x));

        x += espaciado;  // Incrementar x por el espaciado
    } while (x <= final);

    return 0;
}


