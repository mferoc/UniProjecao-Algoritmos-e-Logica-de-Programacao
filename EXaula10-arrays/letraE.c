////EXERCICIO E DA AULA 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
 int i;
 int vetor[10];
  
 srand ( time ( NULL ) );
  
 for (i = 0; i <= 10; i++) {
  vetor[i] = 0 + rand() % ( 99 - 0 );
  
  if (vetor[i] % 2 == 0)
   printf("\nVetor[%d] = %d\n", i, vetor[i] ); }
 
 return 0; }
