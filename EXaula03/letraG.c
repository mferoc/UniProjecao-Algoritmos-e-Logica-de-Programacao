//EXERCICIO 7 DA AULA 3
#include <stdio.h>
#include <math.h>

int main () {
 
 float angulo , seno , cosseno;
 
 printf("Por digite o valor de um angulo em graus:\n");
 printf("Angulo = ");
 scanf("%f" , &angulo);
 
  seno = sin ( angulo * M_PI / 180 );
 
  cosseno = cos ( angulo * M_PI / 180 );
 
 printf("\nOs valores do seno e cosseno em radianos são:\n");
 printf("SENO = %f\n" , seno);
 printf("COSSENO = %f\n" , cosseno);

return 0;}
