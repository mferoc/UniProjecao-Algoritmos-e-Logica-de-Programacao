//EXERCICIO F DA AULA2
#include <stdio.h>

int main () {
 
 float celsius;
 
 printf("Por favor, digite a temperatura em celsius:\n");
 scanf("%f" , &celsius);
 
 float fahrenheit = ( ( 9 * celsius ) + 160 ) / 5;
 
 printf("A temperatura em fahrenheit e: %f\n" , fahrenheit);

return 0; }
