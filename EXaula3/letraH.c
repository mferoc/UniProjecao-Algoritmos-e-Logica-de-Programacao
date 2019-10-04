//EXERCICIO 8 DA AULA 3
#include <stdio.h>
#include <math.h>

int main () {
 
 int bas , exp , res;
 
 printf("Por digite os valores inteiros de base e expoente para efetuar uma exponenciacao:\n");
 printf("Base = ");
 scanf("%d" , &bas);
 printf("Expoente = ");
 scanf("%d" , &exp);
 
  res = pow ( bas , exp );
 
 printf("\nO resultado da potenciacao e: %d\n" , res);

return 0; }
