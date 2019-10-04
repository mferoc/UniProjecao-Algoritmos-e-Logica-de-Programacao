///EXERCICIO 1 DA AULA 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
  int i;
  int vetor[50];
  
  srand(time(NULL));
  
  for (i=0; i<=49; i++) {
    vetor[i]=0+rand()%(99-0);
    printf("vetor[%d] = %d\n" , i , vetor[i]);
  }
  
  
  
return 0;}