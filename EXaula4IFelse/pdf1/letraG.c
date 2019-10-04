#include <stdio.h>
#include <string.h>
int main (void){
 char cpf[100];
 int cpfCrc;
 printf("Digite um numero de cpf: \n");
 scanf("%s", cpf);
  cpfCrc = strlen(cpf);
 if (cpfCrc == 11){
  printf("O cpf tem %d digitos.\n", cpfCrc);}
 else {
  printf("O cpf nao tem 11 digitos.\n");}
return 0;}
