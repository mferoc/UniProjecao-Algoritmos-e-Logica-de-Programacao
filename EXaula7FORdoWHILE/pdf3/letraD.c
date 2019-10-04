#include <stdio.h>

int main(void) {
  
  int i, num;
   i = 1;
  printf("Digite um numero N para limitar um intervalo de 1 a N: ");
  scanf("%d" , &num);
  do {
    
    //i++; 
    if (num % 3 == 0 && num % 7 == 0)
     printf("O numero %d e divisivel por 3 e por 7\n" , i);
    else
     printf("O numero %d nao e divisivel por 3 e por 7\n" , i);
   i++;}while ( i <= num );
return 0; }
