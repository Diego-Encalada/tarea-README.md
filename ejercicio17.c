#include <stdio.h>

int main() {
    int n;
    float producto = 1.0;
    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    printf("El producto de la serie es %.4f.\n", producto);

    return 0;
}