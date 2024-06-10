#include <stdio.h>

int suma_impares(int num) {
    int suma = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 2!= 0) { // si i es impar
            suma += i;
        }
    }
    return suma;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int resultado = suma_impares(num);
    printf("La suma de los numeros impares hasta %d es %d.\n", num, resultado);
    return 0;
}