///EXERCICIO 4 DA AULA 10

#include <stdio.h>
int main ( ) {
int indice;
int vetor[10];
for (indice = 0; indice < 10; indice++) {
vetor[indice]= 2 * indice;
printf("vetor[%d] = %d\n", indice,vetor[indice]);
}
return 0;}