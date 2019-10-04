////EXERCICIO G DA AULA10
#include <stdio.h>
int main(){
     int vetA[5], vetB[8],vetc[8], i=0, x=0, z=0;

     printf("...:::Impressao de elementos comuns entre dois vetores:::...\n\n");

     do{
          printf("Digite o numero %d do vetor A: \t",i+1);
          scanf("%d",&vetA[i]);
          i++;
     }while(i<5);

     do{
          printf("Digite o numero %d do vetor B: \t",x+1);
          scanf("%d",&vetB[x]);
          x++;
     }while(x<8);

     printf("Os elementos comuns entres os vetores sao: \n\n");
     for(i=0;i<8;i++){
       for(x=0;x<5;x++){               
         if(vetA[x] == vetB[i]){
              vetc[z++] = vetA[x];
         }
       }  
     }

     for(i=0;i<z;i++){
           printf("%d\t",vetc[i]);
     }                                                                    
    return 0;}