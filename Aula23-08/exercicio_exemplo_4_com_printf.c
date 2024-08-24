#include <stdio.h>

int main(){
    int idade;
    printf("Qual e a idade: ");
    scanf("%i",&idade);

    if(idade <= 18){
        printf("Voce tem %i anos e eh menor de idade",idade);
    }else{
        printf("Voce tem %i anos e eh maior de idade",idade);
    }
    return 0;
}