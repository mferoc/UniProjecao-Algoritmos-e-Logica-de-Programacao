#include <stdio.h>
#include <string.h>

int main (){

 int i;
 char nome[200];

 printf("Digite o seu nome:\n");
 fgets(nome, 200, stdin);
  nome[strcspn(nome, "\n")] = 0;
 printf("\n");
 
 for (i = 1; i <= 10; i++ ){
  printf("%s\n", nome);}

return 0;}
 
 
 
