#include <stdio.h>

int main(){
    
    float x,y;
    
    printf("Entre com o valor de x:");
    scanf("%f", &x);
    printf("Entre com o valor de y:");
    scanf("%f", &y);
    
    if(x>0 && y>0)
      printf("O Ponto P(%.2f,%.2f) pertence ao primeiro quadrante\n", x, y);
    else
    {
      if(x<0 && y>0)
       printf("O Ponto P(%.2f.%.2f) pertence ao segundo quadrante\n", x, y);
      else
      {
        if(x<0 && y<0)
        printf("O Ponto P(%.2f,%.2f) pertence ao terceiro quadrante\n", x, y);
        else
        {
          if(x>0 && y<0)
          printf("O Ponto P(%.2f,%.2f) pertence ao quarto quadrante\n", x, y);
          else
          {
            if(x==0 && y>0 || y<0)
            printf("O Ponto P(%.2f,%.2f) esta no eixo y\n", x, y);
            else
            {
              if(y==0 && x>0 || x<0)
              printf("O Ponto P(%.2f,%.2f) esta no eixo x\n", x, y);
              else
              {
                if( x==0 && y==0)
                printf("O Ponto P(%.2f,%.2f) esta na origem\n\n", x, y);
              }//fim do último else
            }//fim do penúltimo else
          }//fim do antepenúltimo else
        }//fim do terceiro else
      }//fim do segundo else
    }//fim do primeiro else 
return 0;
}    
