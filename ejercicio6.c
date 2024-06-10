#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n);

    int factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("El factorial de %d es %d\n", n, factorial);
    return 0;
}
