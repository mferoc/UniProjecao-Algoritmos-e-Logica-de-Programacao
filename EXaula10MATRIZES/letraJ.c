/////////////////////////EXERCICIO J DA AULA 10/////////////////////////////////

#include<stdio.h>
#include<string.h>

int main()
{	
    char frase[200];	
    int a , i;		
    
    printf("Digite uma frase: ");	
    
    gets(frase);	
    
    a = strlen ( frase );	
    
    for(i = 0 ; i < a; i++)	
    {		
        if (frase[i] == 'a' || frase[i] == 'A')
            printf("%c\t",frase[i]);		
        if (frase[i] == 'e' || frase[i] == 'E') 
            printf("%c\t",frase[i]);		
        if (frase[i] == 'i' || frase[i] == 'I') 
            printf("%c\t",frase[i]);		
        if (frase[i] == 'o' || frase[i] == 'O') 
            printf("%c\t",frase[i]);		
        if (frase[i] == 'u' || frase[i] == 'U') 
            printf("%c\t",frase[i]);	
    }	

return(0);	
}
 