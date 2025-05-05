#include <stdio.h>

int main() {
    FILE *in = fopen("entrada.txt", "r");
    FILE *out = fopen("tarea.txt", "w");
    int n;
    float a, b;

    fscanf(in, "%d%f%f", &n, &a, &b);

    float x[n], y[n];

    for (int i = 0; i < n; i++) {
        x[i] = a + i * (b - a) / (n - 1);
        y[i] = x[i] * x[i] + 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(out, "x=%.2f y=%.2f\n", x[i], y[i]);
    }

    fclose(in);
    fclose(out);
    return 0;
}

