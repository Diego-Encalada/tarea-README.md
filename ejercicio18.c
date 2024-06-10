#include <stdio.h>

int es_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, contador = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) contador++;
    }

    printf("Hay %d números primos entre 1 y %d.\n", contador, n);

    return 0;
}