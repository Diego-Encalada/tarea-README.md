#include <stdio.h>

int main (){
int num, cont = 0;
printf("Ingrese un número: ");
scanf("%d", &num);

while(num != 0){
    num /= 10;
    cont++;
}
printf("el número tiene %d dígitos \n", cont);

return 0;

}