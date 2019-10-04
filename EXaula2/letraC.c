//EXERCICIO C DA AULA2
#include <stdio.h>

int main () {
 
 int num;
 int numDois;
 
 printf("Por favor, digite um numero inteiro e pressione enter: ");
 scanf("%d" , &num);
 printf("Por favor, digite outro numero inteiro e pressione enter: ");
 scanf("%d" , &numDois);
 
 int numSoma = num + numDois;
 int numSub = num - numDois;
 int numMult = num * numDois;
 int numDiv = num / numDois;
 int numResto = num % numDois;
 
 printf("A soma dos numeros digitados e: %d\n" , numSoma);
 printf("A subtracao dos numeros digitados e: %d\n" , numSub);
 printf("A multiplicacao dos numeros digitados e: %d\n" , numMult);
 printf("A divisao dos numeros digitados e: %d\n" , numDiv);
 printf("O resto da divisao dos numeros digitados e: %d\n" , numResto);

return 0;}

