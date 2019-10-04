//EXERCICIO 2 DA AULA 6
#include <stdio.h>
#include <string.h>

int main (){
    
    float pCUSTO , pVENDA;
    char nome[200];
    
    printf("Digite o nome do produto: ");
    //LENDO UMA STRING DO TECLADO COM fgets //////fgets( str, STRSIZE, stdin );
    fgets(nome , 200 , stdin);
     //PARA REMOVER A "SUJEIRA" DO BUFFER AO USAR O fgets /////////minhaString[strcspn(minhaString, "\n")] = 0;   //////PRECISA DA LIB <string.h>
     nome[strcspn(nome , "\n")] = 0;
    printf("Digite o PREÇO DE CUSTO: ");
    scanf("%f" , &pCUSTO);
    printf("Digite o PREÇO DE VENDA: ");
    scanf("%f" , &pVENDA);
    
    if (pCUSTO > pVENDA)
     printf("Na venda do produto: %s houve prejuizo\n" , nome);
    else if (pCUSTO < pVENDA)
     printf("Na venda do produto: %s houve lucro\n" , nome);
    else
     printf("Na venda do produto: %s houve empate\n" , nome);

return 0;}