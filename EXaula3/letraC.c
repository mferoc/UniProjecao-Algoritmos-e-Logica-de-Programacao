//EXERCICIO 3 DA AULA 3
#include <stdio.h>

int main () {
 
 float salario, vendas, saltotal;
 
 printf("Por favor, digite o salário do seu vendedor e o total, em reais, de vendas efetuadas no mes:\n");
 printf("Salario = ");
 scanf("%f" , &salario);
 printf("Vendas = ");
 
 scanf("%f" , &vendas);
 
  saltotal = salario + ( ( vendas * 15 ) / 100 );
 
 printf("\nO salario total sera de: %f\n", saltotal);

return 0; }
