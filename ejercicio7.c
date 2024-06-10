#include <stdio.h>

int main(){
int n, suma = 0;
printf("ingrese el número de términos; ");
scanf("%d", &n);

int i = 1;
while(i <= n){
    suma += i;
    i++;

}
printf("la suma de los primeros %d términos es: %d\n", n, suma);


    return 0;
}


