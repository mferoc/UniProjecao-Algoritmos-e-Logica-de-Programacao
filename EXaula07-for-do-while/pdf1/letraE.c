#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,a,randInit;
    scanf("%d", &a);
    printf("intervalo da rand: [%d,%d]\n", a, 99);
    srand(time(NULL));
 
    for(i=1 ; i <= 50 ; i++){
     randInit = a + rand() %  (100 - a);        
     printf("Numero %d: %d\n",i, randInit);}
return 0;}
