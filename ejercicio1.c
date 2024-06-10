#include <stdio.h>

int main(){
  
  int num, suma = 0;
  printf("Ingrese un número: \n");
  scanf("%d", &num);

  // con bucle while
  while (num!= 0)
  {
    suma += num % 10;
    num /= 10;
  }

  printf("la suma de dígitos da como resultado: %d\n", suma);

  return 0;
}