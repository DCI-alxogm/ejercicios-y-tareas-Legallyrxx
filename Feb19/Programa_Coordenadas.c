#include <stdio.h>
#include <math.h>
int main(){
    double x,y,z;
    double rcil,θcil;
    double resf, θesf, ϕ;
 
    // Solicitar valores desde la terminal
    printf("Introduce el valor de x: ");
    scanf("%lf", &x);
    printf("Introduce el valor de y: ");
    scanf("%lf", &y);
    printf("Introduce el valor de z: ");
    scanf("%lf", &z);
    
    //Operaciones cilíndricas
    rcil=sqrt(x*x+y*y);
    θcil=atan2(y,x);
    
    
    // Operaciones esféricas
    resf= sqrt(x*x+y*y+z*z);
    θesf=atan2(y,x);
    ϕ=acos(z/resf);
    
    printf("\nCoordenadas cilíndricas:(r=%.3f,θ=%.3frad,z=%.3f)\n",rcil,θcil,z);
    printf("Coordenadas esféricas: (r=%.3f, θ=%.3f rad, ϕ=%.3f rad)\n",resf,θesf,ϕ);
    
    return 0;
}
