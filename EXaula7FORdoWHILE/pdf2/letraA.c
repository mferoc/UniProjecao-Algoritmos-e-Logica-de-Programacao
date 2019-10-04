#include<stdio.h>

int main ()
{
  char nome[200];
  int i;
  
  printf("Digite o seu primeiro nome: ");
  scanf("%s" , nome);
  
    i = 1;
    
  while (i <= 10)
  {
    printf("%d - %s\n" , i , nome);
    i++;
  }
  
return 0;
}