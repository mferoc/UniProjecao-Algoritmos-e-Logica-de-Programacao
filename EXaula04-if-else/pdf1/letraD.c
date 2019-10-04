#include <stdio.h>
#include <math.h>

int main (){
 int a,b;
 printf("Por digite dois numeros inteiros:\n");
 scanf("%d", &a);
 scanf("%d", &b);
  if (a>b){
   printf("O numero %d e maior\n", a);}
  else if (a==b) {
    printf("Os numeros sao iguais\n");}
  else {
   printf("O numero %d e maior\n", b);}
return 0;}
