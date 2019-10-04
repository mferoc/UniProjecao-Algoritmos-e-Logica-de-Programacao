//EXERCICIO 4 DA AULA 6
#include <stdio.h>
int main () {
    
  int ab, cd, ef;
    
  printf("Digite o comprimento de tres pedacos de madeira (A, B, C) afim de verificar se eles podem formar um triangulo:\n");
  printf("A = ");
  scanf("%d" , &ab);
  printf("B = ");
  scanf("%d" , &cd);
  printf("C = ");
  scanf("%d" , &ef);
  
  if (ab + cd > ef && ab + ef > cd && cd + ef > ab) {
    printf("Os pedacos de madeira podem formar um triangulo. ");  
      
      if (ab == cd && ab == ef && ef == cd) {
       printf("E o triangulo sera equilatero (tres lados iguais).\n"); }
    else if(ab != cd && ab != ef && cd != ef) {
       printf("E o triangulo sera escaleno (tres lados diferentes).\n"); }
    else {
       printf("E o trianulo sera isosceles (dois lados iguais e um diferente).\n"); } }
  
  else  {
    printf("Os pedacos de madeira nao podem formar um triangulo.\n"); }
  
return 0; }