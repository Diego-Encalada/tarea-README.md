#include <stdio.h>

int mcd(int a, int b) {
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    int resultado = mcd(num1, num2);
    printf("El MCD de %d y %d es %d.\n", num1, num2, resultado);
    return 0;
}