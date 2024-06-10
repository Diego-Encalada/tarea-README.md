#include <stdio.h>


int invertir(int num) {
    int inverso = 0;
    while (num != 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    return inverso;
}

int main() {
    int num2;
    printf("Ingrese un número: ");
    scanf("%d", &num2);
    printf("El inverso del número %d es: %d\n", num2, invertir(num2));
    return 0;
}