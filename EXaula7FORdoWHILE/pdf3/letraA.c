#include <stdio.h>

int main() {
  
  int i;
   i = 1;
  char nome[200];
  
  printf("Digite o seu primeiro nome: ");
  scanf("%s" , nome);
  
  do {
    printf("%s\n" , nome);
    i++; } 
  while ( i <= 10 );
return 0; }
