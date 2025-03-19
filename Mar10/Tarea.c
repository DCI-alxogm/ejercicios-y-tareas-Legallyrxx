#include <stdio.h>
#include <math.h>
#include <string.h> // Para usar strcmp
 
#define PI 3.14159265358979323846
 
void cartesian_to_spherical(double x, double y, double z, int degrees, double *r, double *theta, double *phi) {
    *r = sqrt(x * x + y * y + z * z);
    *theta = atan2(y, x);
    *phi = acos(z / (*r));
    
    if (degrees) {
        *theta = *theta * 180 / PI;
        *phi = *phi * 180 / PI;
    }
}
 
void spherical_to_cartesian(double r, double theta, double phi, int degrees, double *x, double *y, double *z) {
    if (degrees) {
        theta = theta * PI / 180;
        phi = phi * PI / 180;
    }
    
    *x = r * sin(phi) * cos(theta);
    *y = r * sin(phi) * sin(theta);
    *z = r * cos(phi);
}
 
void cartesian_to_cylindrical(double x, double y, double z, int degrees, double *rho, double *phi, double *z_out) {
    *rho = sqrt(x * x + y * y);
    *phi = atan2(y, x);
    *z_out = z;
    
    if (degrees) {
        *phi = *phi * 180 / PI;
    }
}
 
void cylindrical_to_cartesian(double rho, double phi, double z, int degrees, double *x, double *y, double *z_out) {
    if (degrees) {
        phi = phi * PI / 180;
    }
    
    *x = rho * cos(phi);
    *y = rho * sin(phi);
    *z_out = z;
}
 
double convert_length(double value, const char* unit_from, const char* unit_to) {
    double conversion_factors[] = {1.0, 3.28084, 39.3701, 0.000621371};
    const char* units[] = {"m", "ft", "in", "mi"};
    
    int index_from = -1, index_to = -1;
    for (int i = 0; i < 4; i++) {
        if (strcmp(unit_from, units[i]) == 0) index_from = i;
        if (strcmp(unit_to, units[i]) == 0) index_to = i;
    }
    
    if (index_from == -1 || index_to == -1) {
        printf("Unidad no reconocida.\n");
        return -1;
    }
    
    return value * conversion_factors[index_to] / conversion_factors[index_from];
}
 
int main() {
    int option;
    printf("Seleccione una opción:\n");
    printf("1. Transformación de coordenadas\n");
    printf("2. Transformación de sistemas de unidades\n");
    scanf("%d", &option);
    
    if (option == 1) {
        int transform_option;
        printf("Seleccione el tipo de transformación:\n");
        printf("1. Cartesianas a esféricas\n");
        printf("2. Esféricas a cartesianas\n");
        printf("3. Cartesianas a cilíndricas\n");
        printf("4. Cilíndricas a cartesianas\n");
        scanf("%d", &transform_option);
        
        if (transform_option == 1) {
            double x, y, z, r, theta, phi;
            char degrees_input;
            printf("Ingrese x: ");
            scanf("%lf", &x);
            printf("Ingrese y: ");
            scanf("%lf", &y);
            printf("Ingrese z: ");
            scanf("%lf", &z);
            printf("¿Usar grados? (s/n): ");
            scanf(" %c", &degrees_input);
            int degrees = (degrees_input == 's' || degrees_input == 'S');
            
            cartesian_to_spherical(x, y, z, degrees, &r, &theta, &phi);
            printf("r: %lf, theta: %lf, phi: %lf\n", r, theta, phi);
        } else if (transform_option == 2) {
            double r, theta, phi, x, y, z;
            char degrees_input;
            printf("Ingrese r: ");
            scanf("%lf", &r);
            printf("Ingrese theta: ");
            scanf("%lf", &theta);
            printf("Ingrese phi: ");
            scanf("%lf", &phi);
            printf("¿Usar grados? (s/n): ");
            scanf(" %c", &degrees_input);
            int degrees = (degrees_input == 's' || degrees_input == 'S');
            
            spherical_to_cartesian(r, theta, phi, degrees, &x, &y, &z);
            printf("x: %lf, y: %lf, z: %lf\n", x, y, z);
        } else if (transform_option == 3) {
            double x, y, z, rho, phi, z_out;
            char degrees_input;
            printf("Ingrese x: ");
            scanf("%lf", &x);
            printf("Ingrese y: ");
            scanf("%lf", &y);
            printf("Ingrese z: ");
            scanf("%lf", &z);
            printf("¿Usar grados? (s/n): ");
            scanf(" %c", &degrees_input);
            int degrees = (degrees_input == 's' || degrees_input == 'S');
            
            cartesian_to_cylindrical(x, y, z, degrees, &rho, &phi, &z_out);
            printf("rho: %lf, phi: %lf, z: %lf\n", rho, phi, z_out);
        } else if (transform_option == 4) {
            double rho, phi, z, x, y, z_out;
            char degrees_input;
            printf("Ingrese rho: ");
            scanf("%lf", &rho);
            printf("Ingrese phi: ");
            scanf("%lf", &phi);
            printf("Ingrese z: ");
            scanf("%lf", &z);
            printf("¿Usar grados? (s/n): ");
            scanf(" %c", &degrees_input);
            int degrees = (degrees_input == 's' || degrees_input == 'S');
            
            cylindrical_to_cartesian(rho, phi, z, degrees, &x, &y, &z_out);
            printf("x: %lf, y: %lf, z: %lf\n", x, y, z_out);
        }
    } else if (option == 2) {
        int quantity_option;
        printf("Seleccione la cantidad a transformar:\n");
        printf("1. Longitud\n");
        scanf("%d", &quantity_option);
        
        if (quantity_option == 1) {
            double value;
            char unit_from[3], unit_to[3];
            printf("Ingrese el valor: ");
            scanf("%lf", &value);
            printf("Ingrese la unidad de origen (m, ft, in, mi): ");
            scanf("%s", unit_from);
            printf("Ingrese la unidad de destino (m, ft, in, mi): ");
            scanf("%s", unit_to);
            
            double converted_value = convert_length(value, unit_from, unit_to);
            if (converted_value != -1) {
                printf("Valor convertido: %lf %s\n", converted_value, unit_to);
            }
        }
    }
    
    return 0;
}
