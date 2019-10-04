//EXERCICIO 6 DA AULA 6
#include <stdio.h>

int main () {
  
  int x , y , z;
  
  printf("Digite tres numeros inteiros:\n");
  scanf("%d" , &x);
  scanf("%d" , &y);
  scanf("%d" , &z);
  
  if (x > y && x > z) {
    printf("O numero %d e o maior.\n" , x); }
  else if (y > x && y > z) {
    printf("O numero %d e o maior.\n" , y); }
  else {
    printf("O numero %d e o maior.\n" , z); }

return 0; }