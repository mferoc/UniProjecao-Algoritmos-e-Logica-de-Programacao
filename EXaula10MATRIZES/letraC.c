////EXERCICIO C DA AULA 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
 int i;
 int vetor[100];
 int valor_peq = 0; 
 int maior_valor;
 srand ( time ( NULL ) );
  
 for (i = 0; i <= 99; i++) 
 {
  vetor[i] = 0 + rand() % ( 99 - 0 );
  
  printf("Vetor[%d] = %d\t", i , vetor[i]);
  
  if (vetor[i] > valor_peq){
     valor_peq = vetor[i];
     maior_valor = valor_peq;}
 }
  
   for (i = 0; i <= 99; i++) 
 {
  
  if (maior_valor == vetor[i])
     printf("\n\nVetor[%d] = %d\n\n", i, maior_valor);
 }
 return 0; }