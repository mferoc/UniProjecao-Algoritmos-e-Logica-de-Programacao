//EXERCICIO E DA AULA2
#include <stdio.h>

int main () {
 
 char nome[200];
 float p1;
 float p2;
 float p3;
 float p4;
 
 printf("Por favor, digite o nome do aluno e as notas de suas quatro provas\n");
 scanf("%s" , nome);
 printf("\n");
 scanf("%f" , &p1);
 scanf("%f" , &p2);
 scanf("%f" , &p3);
 scanf("%f" , &p4);
 
 float nota = (p1 + p2 + p3 + p4) / 4;
 
 printf("A media do aluno: %s foi: %f\n" , nome , nota);

return 0; }
