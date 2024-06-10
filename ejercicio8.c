#include <stdio.h>

int main(){
int num, multipl = 1;
printf("Ingrese el número de términos: ");
scanf("%d", &num);

int x = 2;
int i = 0;
while(i < num){
    multipl *= x;
    x *= 2;
    i++;
}
printf("El resultado de los términos %d es: %d\n", num, multipl);

    return 0;
}