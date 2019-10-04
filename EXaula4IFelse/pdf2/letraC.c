#include <stdio.h>
int main (void){
 //aqui será salvo as predefinições da conta.
 int contaNum, contaAg, contaPsw;
  contaNum=111;
  contaAg=222;
  contaPsw=333;
 //aqui será armazenado os dados de uma conta digitados pelo usuario.
 int num, ag, psw;
 printf("Digite um numero de conta, uma agencia e uma senha(todos os dados sao numeros inteiros): \n");
 printf("Numero da conta = ");
 scanf("%d", &num);
 printf("Agencia = ");
 scanf("%d",&ag);
 printf("Senha = ");
 scanf("%d",&psw);
 if (num==contaNum && ag==contaAg && psw==contaPsw){
  printf("Vc tem acesso a essa conta.\n");}
 else {
  printf("Vc nao tem acesso a essa conta.\n");}
return 0;}
