#include <stdio.h>
int main (){
 int num;
 
 printf("Digite um numero natural:\n");
 scanf("%d", &num);
 
 if (num%3==0&&num%7==0){
  printf("O numero e divisivel por 3 e por 7.\n");}
 else {
 
  printf("O numero nao e divisivel por 3 e por 7.\n");}
return 0;}
