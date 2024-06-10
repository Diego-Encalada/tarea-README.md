#include <stdio.h>

int main(){
int num, x=0, y=1;

printf("ingrese el número de de elementos que saldrán en la serie: ");
scanf("%d", &num);

printf("0 ");
while(--num > 0){
    printf(" %d ", y);
    int num2 = x;
    x = y;
    y = num2 + y;
}
printf("\n ");
    return 0;
}