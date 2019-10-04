#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,a,randInit;
    //scanf("%d", &a);
    printf("intervalo da rand: [%d,%d]\n", 0, 99);
    srand(time(NULL));
 
    for(i=1 ; i <= 50 ; i++){
     randInit = rand() %  (100);        
     printf("Numero %d: %d\n",i, randInit);}
return 0;}
