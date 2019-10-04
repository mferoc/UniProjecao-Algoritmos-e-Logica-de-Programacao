//TESTE DE MESA
//X = ++Y SE Y VALE 2.5 INCREMENTANDO 1 VALERA 3.5 PORTANTO ** X=3.5 ** E ** Y=3.5 **
//X SERA MULTIPLICADO POR 2 ENTAO X = 3.5 * 2 -> ** X = 7 **
//A RECEBE O VALOR DE B E SOMA COM 1 PORTANTO A = B + 1 -> A = 1 + 1 -> ** A = 2 **
//A INCREMENTA 1, ENTAO ** A = 3 **
//C RECEBE O VALOR DE A E MULTIPLICA POR 2 E EM SEGUIDA SOMA COM A VALOR DE B ENTAO C = 2 * A + B -> C = 2 * 3 + 1 -> ** C = 7 **
//A = C // C E DECREMENTADO EM 1 ENTAO ** C = 6**  **A = 7**
//B RECEBE O VALOR DE A(7) //A E INCREMENTADO EM 1// SOMA COM O VALOR DE C  DECREMENTADO EM 1 ENTAO **B = 7 + 5 = 12** **A=8** **C=5** 
//OS VALORES IMPRESSOS SERAO X=7 Y= 3.5 A=8 B=12 C=5  


#include <stdio.h>
#include <stdlib.h>

int main (){

 float x , y = 2.5;
 int a , b = 1 , c;
  
  x = ++y;
  x *= 2;
  a = b + 1;
  a++;
  c = 2 * a + b;
  a = c--;
  b = a++ + --c;
 
 printf(" x= %.1f \n y= %.1f \n a= %i \n b= %i \n c= %i \n" , x , y , a , b , c);

return 0;}
