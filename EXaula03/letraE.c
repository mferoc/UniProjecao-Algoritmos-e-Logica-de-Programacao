//EXERCICIO 5 DA AULA 3
#include <stdio.h>
#include <math.h>

int main () {
 
 int x;
 float y;
 
 printf("Por favor, digite um valor inteiro para a variavel x:\n");
 printf("x = ");
 scanf("%d", &x);

  y = ( 2* ( sqrt ( x + 1 ) ) ) / ( 3 * pow ( x , 3 ) );
 
 printf("\ny == %f\n" , y);

return 0; }
