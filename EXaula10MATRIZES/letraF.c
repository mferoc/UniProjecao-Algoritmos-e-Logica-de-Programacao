////EXERCICIO F DA AULA 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main () {
  
 int i;
 int vetorA[5];
 int vetorB[5];
 int vetorC[10];
 srand ( time ( NULL ) );
  
 for (i = 0; i <= 4; i++) 
 {
  vetorA[i] = 0 + rand() % ( 99 - 0 );
  
  printf("VetorA[%d] = %d\t", i , vetorA[i]);}
   for (i = 0; i <= 4; i++) 
 {
  vetorB[i] = 0 + rand() % ( 99 - 0 );
  
  printf("VetorB[%d] = %d\t", i , vetorB[i]);}
  
  printf("\n\n\n");
   for (i = 0; i <= 4; i++) 
 {
  vetorC[i] = vetorA[i];
  printf("VetorC[%d] = %d\t", i , vetorC[i]);
 }
  for (i = 0; i <= 9; i++) 
 {
  vetorC[i + 5] = vetorB[i];
  if(i>4)
  printf("VetorC[%d] = %d\t", i , vetorC[i]);
 }
  
 return 0; }