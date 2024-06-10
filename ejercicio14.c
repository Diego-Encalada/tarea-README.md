#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("La suma de los cuadrados de los primeros %d números naturales es %d.\n", n, suma);

    return 0;
}