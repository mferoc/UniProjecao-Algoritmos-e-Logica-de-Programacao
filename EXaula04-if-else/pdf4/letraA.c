#include <stdio.h>
#include <math.h>

int main (){

 float a, b, c, area, s;
 
 printf("Por favor, entre com as medidas de tres lados de um triangulo:\n");
 scanf("%f%f%f", &a, &b, &c);

 //Calculando S
  s = (a + b + c) / 2;

 //Calculando a Area com a formula de Heron
  area = sqrt( s * (s - a) * (s - b) * (s - c) );

 printf("A area do triangulo e %f\n" , area);

return 0;}
