#include <stdio.h>
#include <math.h>

int main (){
 char nome[100];
 float p1,p2,p3,p4,nota;
 printf("Por digite o nome e as quatro notas de um aluno:\n");
 printf("NOME == ");
 scanf("%s", nome);
 printf("P1 == ");
 scanf("%f", &p1);
 printf("P2 == ");
 scanf("%f", &p2);
 printf("P3 == ");
 scanf("%f", &p3);
 printf("P4 == ");
 scanf("%f", &p4);
  nota=(p1+p2+p3+p4)/4;
  if (nota>=6){
   printf("O aluno %s foi aprovado\n", nome);}
  else {
   printf("O aluno %s foi reprovado\n", nome);}
return 0;}
