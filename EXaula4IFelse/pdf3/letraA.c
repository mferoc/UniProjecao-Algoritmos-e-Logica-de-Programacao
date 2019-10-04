//EXERCICIO 1 DA AULA 6
#include <stdio.h>

int main () {
    
    int num;
    
    printf("Por favor, digite um numero inteiro: ");
    scanf("%d" , &num);
    
    if (num > 0)
        printf("O numero e POSITIVO\n");
    else if (num < 0)
        printf("O numero e NEGATIVO\n");
    else
        printf("O numero e NULO\n");

return 0;}