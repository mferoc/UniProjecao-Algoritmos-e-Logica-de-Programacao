#include <stdio.h>

int main (){

 int i, num;
 scanf("%d", &num);

 for (i = 1; i<=num; i++)
 {
  if (i % 3 == 0 && i % 7 ==0){
   printf("O numero %d e divisivel por 3 e por 7\n", i);}
  else{
   printf("O numero %d nao e divisivel por 3 e por 7\n", i);}
 } 

return 0;}
