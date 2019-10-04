#include <stdio.h>

int main(){

 float saldoMedio, credito;

 printf("Por favor, informe o valor do saldo medio de um cliente:\n");
 scanf("%f", &saldoMedio);

 if (saldoMedio >= 0 && saldoMedio <= 200){
     credito = 0;
     printf("O saldo medio e %f e sera consedido %f de credito.\n", saldoMedio, credito);}

 else if (saldoMedio >= 201 && saldoMedio <= 400){
     credito = ( saldoMedio * 20 ) / 100;
     printf("O saldo medio e %f e sera consedido %f de credito.\n", saldoMedio, credito);}

 else if (saldoMedio >= 401 && saldoMedio <= 600){
     credito = ( saldoMedio * 30 ) / 100;
     printf("O saldo medio e %f e sera consedido %f de credito.\n", saldoMedio, credito);}

 else{
     credito = ( saldoMedio * 40 ) / 100;
     printf("O saldo medio e %f e sera consedido %f de credito.\n", saldoMedio, credito);}

return 0;}
