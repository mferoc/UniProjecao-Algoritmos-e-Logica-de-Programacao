#include <stdio.h>
int main (void){
 int num;
 printf("Digite um numero natural: \n");
 scanf("%d", &num);
 if (num>=100&&num<=200){
  printf("O numero esta entre 100 e 200\n");}
 else {
  printf("O numero nao esta entre 100 e 200.\n");}

system("pause");
return 0;
}
