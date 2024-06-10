#include <stdio.h>

int main() {
    int num, divisores = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }

    return 0;
}