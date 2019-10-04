#include <stdio.h>
#include <string.h>
int main (void){
 char cpf[11];
 int valor;
 printf("Digite um numero de cpf: \n");
 scanf("%s", cpf);
  valor = strcmp(cpf,"11111111111");
 if (valor==0){
  printf("Cpf correto\n");}
 else {
  printf("Cpf nao correto.\n");}
return 0;}
