#include <stdio.h>

int raiz_cubica(int numero) {
    int resultado = 0;
    for (int i = 0; i < 100 && numero > 0; i++) {
        int temp = i + 1;
        if (temp * temp * temp <= numero) {
            resultado = temp;
        } else {
            break;
        }
    }
    return resultado;
}

int main() {
    int numero;
    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El número debe ser positivo.\n");
        return 1;
    }

    int resultado = raiz_cubica(numero);
    printf("La raíz cúbica de %d es %d.\n", numero, resultado);
    return 0;
}