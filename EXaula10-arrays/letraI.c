/////////////////////////EXERCICIO I DA AULA 10/////////////////////////////////

#include <stdio.h>
#include <string.h>

int main () 
{

    int x , tam;
    char nome[30];

    printf("Digite seu primeiro nome: ");
    scanf("%s" , nome);

    tam = strlen ( nome );

    printf("O nome na ordem inversa e: ");

    for (x = tam - 1; x >= 0; x--)
        printf("%c" , nome[x]);
    
    printf("\n\n");

return 0;
}