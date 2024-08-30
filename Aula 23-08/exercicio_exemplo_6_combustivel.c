#include <stdio.h>

int main(){
    float total = 0, desconto = 0, litros = 0, preco = 0, porcentagemDesconto = 0;

    printf("Preco do combustivel\n");

    printf("Quanto eh a quantidade em litros, a quantidade de litros e a porcentagem do desconto? ");
    scanf("%f %f %f", &litros,&preco,&porcentagemDesconto);

    total = litros * preco;

    desconto = total * porcentagemDesconto;

    if(total > 100.00){
        
        printf("O preco total sem desconto sera de %f \n",total);
        printf("O desconto e de: %f \n",desconto);
        total = total - desconto;
        printf("O preco total com desconto sera de %f",total);
    }else {
        printf("O preco total sera de %f",total);
    }
    return 0;
}