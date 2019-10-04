#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    //*******GERANDO_NUMEROS_ALEATORIOS***(INICIO)*****////
    int i , a , randInit;
    
    srand(time(NULL));
 
    for(i = 1 ; i <= 1 ; i++)
    {
        randInit = 0 + rand() %  (9 - 0);        
        printf("Numero %d: %d\n", i , randInit);
    }
    //*******GERANDO_NUMEROS_ALEATORIOS***(FIM)*****//////
    
    ////*****ANALISANDO AS TENTATIVAS***(INICIO)*******///
    int tentativas , palpite , j;
    
    while(tentativas < 5)
    {
        for (j = 1; j <= 5; j++)
            printf("De o seu palpite: ");
            scanf("%d" , &palpite);
        {
            while(palpite != randInit && tentativas < 5) 
            {
                if(palpite == randInit)
                    printf("ADIVINHOU\n");
                else if (palpite < randInit)
                    printf("DIGITE UM NUMERO MAIOR\n");
                else if (palpite > randInit)
                    printf("DIGITE UM NUMERO MENOR");
                else
                    printf("PERDEU");
        }
            }
    tentativas++;}

return 0;
}