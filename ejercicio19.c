#include <stdio.h>

int main() {
    int n, triangular = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        triangular += i;
    }

    printf("El %d número triangular es %d.\n", n, triangular);

    return 0;
}