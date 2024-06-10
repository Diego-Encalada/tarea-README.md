#include <stdio.h>

int suma_pares(int num) {
    int suma = 0;
    for (int i = 2; i <= num; i += 2) { // inicio en 2 y aumento de 2 en 2
        suma += i;
    }
    return suma;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int resultado = suma_pares(num);
    printf("La suma de los numeros pares hasta %d es %d.\n", num, resultado);
    return 0;
}