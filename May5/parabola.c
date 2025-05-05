#include <stdio.h>

int main() {
    FILE *in = fopen("entrada.txt", "r");
    FILE *out = fopen("parabola.txt", "w");
    int n;
    float a, b, x, y;

    fscanf(in, "%d%f%f", &n, &a, &b);
    for (int i = 0; i < n; i++) {
        x = a + i * (b - a) / (n - 1);
        y = x * x + 1;
        fprintf(out, "x=%.2f y=%.2f\n", x, y);
    }

    fclose(in);
    fclose(out);
    return 0;
}

