#include <stdio.h>

int main() {
    int n;
    float suma = 0.0, i = 1;
    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    do {
        suma += 1.0 / i;
        i++;
    } while (i <= n);

    printf("La suma de la serie es %.4f.\n", suma);

    return 0;
}