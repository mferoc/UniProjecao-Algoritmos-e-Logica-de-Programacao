//EXERCICIO F DA AULA2
#include <stdio.h>

int main () {
 
 float fahrenheit;
 
 printf("Por favor, digite a temperatura em fahrenheit:\n");
 scanf("%f" , &fahrenheit);
 
 float celsius = ( fahrenheit - 32 ) * 5 / 9;
 
 printf("A temperatura em celsius e: %f\n" , celsius);

return 0; }
