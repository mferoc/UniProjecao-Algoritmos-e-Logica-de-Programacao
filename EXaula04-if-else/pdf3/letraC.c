//EXERCICIO 2 DA AULA 6
#include <stdio.h>
#include <string.h>

#define STRSIZE 200

int main() {
    
    float n1 , n2 , n3, n4 , media;
    char nmALUNO[STRSIZE];
    
    printf("Digite o nome do aluno: ");
    fgets (nmALUNO , STRSIZE , stdin);
     nmALUNO[strcspn(nmALUNO, "\n")] = 0;
    printf("Digite as notas da p1, p2, p3 e p4 respectivamente:\n");
    scanf("%f" "%f" "%f" "%f" , &n1 , &n2 , &n3, &n4);
    
      media = ( ( n1 + n2 + n3 + n4 ) / 4);
    
    if (media >= 6)
     printf("Aluno(a) %s esta APROVADO\n" , nmALUNO);
    
    if (media < 6)
     {
       printf("Aluno(a) %s precisara fazer um exame final\n" , nmALUNO);
       printf("Digite a nota do exame final: ");
       float nFINAL;
       scanf("%f" , &nFINAL);
       float mediaFINAL = ( ( media + nFINAL ) / 2 );
     
        if (mediaFINAL >= 5)
        {
         printf("Aluno(a) %s esta APROVADO\n" , nmALUNO);
        }
       else if (mediaFINAL < 5)
      { 
        printf("Aluno(a) %s esta REPROVADO\n" , nmALUNO);
       }
     }

return 0; }