/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  int i;
  float soma, teste, j;
    teste = 1.0/2;
    soma = 0.0;
    j = 50.0;
  
  for (i=1; i<=50; i++)
  { 
    soma = soma +  (j/i);
    printf("%0.f /// %d === %f\n" , j, i, soma);
    j--;
  }
  printf("\n\n\n%f\t" , teste);
  return 0;
}