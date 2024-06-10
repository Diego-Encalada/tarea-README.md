#include <stdio.h>

int main() {
    int n, suma = 0, factorial = 1;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        suma += factorial;
    }

    printf("La suma de los factoriales de los primeros %d números es %d.\n", n, suma);

    return 0;
}