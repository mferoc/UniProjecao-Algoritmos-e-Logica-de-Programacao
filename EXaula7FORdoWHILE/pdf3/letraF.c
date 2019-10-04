#include <stdio.h>
 
int main()
{
 
  int a, b, auxiliar, i, n;
    a = 0;
    b = 1;
    i = 1;
 
  printf("Digite um número: ");
  scanf("%d" , &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n" , b);
 
  do
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    printf("%d\n", auxiliar);
    i++;
  } while(i < n);

return 0;
}