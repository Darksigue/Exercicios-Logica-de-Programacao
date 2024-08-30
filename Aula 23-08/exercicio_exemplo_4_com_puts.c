#include <stdio.h>

int main(){
    int idade;
    printf("Qual e a idade: ");
    scanf("%i",&idade);

    if(idade <= 18) printf("Menor, %i",idade);
    else printf("Maior %i", idade);
    
    return 0;

}