//EXERCICIO 6 DA AULA 6
#include <stdio.h>

int main () {
 
 float salario , novoSALARIO;
 int abono = 100;
 
 printf("Entre com o salario de um funcionario:\n");
 printf("RS");
 scanf("%f" , &salario);
 
 if (salario > 750) {
   novoSALARIO = ( salario + ( ( salario * 5 ) / 100 ) );
   printf("O salario reajustado sera RS%.2f\n" , novoSALARIO); }
 else {
   novoSALARIO = abono + ( salario + ( ( salario * 5 ) / 100 ) );
    printf("O salario reajustado sera RS%.2f\n" , novoSALARIO); }
 
return 0; }
