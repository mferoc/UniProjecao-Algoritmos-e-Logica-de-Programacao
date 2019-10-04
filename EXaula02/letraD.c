//EXERCICIO D DA AULA2
#include <stdio.h>

int main () {
 
 float km;
 float litros;
 
 printf("Para calcular a quantidade de combustivel gasto em uma viagem de carro digite primeiro a quilometragem da viagem (em KM) e em seguida a quantidade de combustivel gasto (em L): ");
 scanf("%f" , &km);
 printf("\n");
 scanf ("%f" , &litro);
 
 float consumo = km / litros;
 
 printf("O consumo total foi de: %fkm/l\n" , consumo);

return 0; }
