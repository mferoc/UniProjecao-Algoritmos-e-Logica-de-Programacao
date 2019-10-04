////EXERCICIO 2 DA AULA 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
  int i;
  int vetor[30];
  
  srand ( time ( NULL ) );
  
  for (i = 0; i <= 30; i++) {
    vetor[i] = 0 + rand() % ( 99 - 0 );
  }
  printf("vetor[0] = %d\n" , vetor[0]);
  printf("vetor[14] = %d\n" , vetor[14]);
  printf("vetor[28] = %d\n" , vetor[28]);
  
  
  
return 0; }