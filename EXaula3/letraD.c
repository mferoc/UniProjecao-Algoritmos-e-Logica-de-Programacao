//EXERCICIO 4 DA AULA 3
#include <stdio.h>

int main () {
 
 float deposito , depMaisRend;
 
 printf("Por favor, digite o valor depositado no mes na poupanca:\n");
 printf("Deposito = ");
 scanf("%f" , &deposito);
 
  depMaisRend = deposito + ( ( deposito * 0.7 ) / 100 );
 
 printf("\nApos um mes de rendimentos tera %f na poupanca.\n" , depMaisRend);

return 0; }
