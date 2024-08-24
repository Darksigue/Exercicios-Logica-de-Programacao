#include <stdio.h>

int main(){
    float salario = 0, salarioAliquota = 0;

    printf("Imposto de Renda \n");

    printf("Entre com o seu salario: ");
    scanf("%f",&salario);

    if(salario <= 1903.98){
        printf("O seu imposto de renda sera isento, portanto seu salario e de: ", salario);
    }else if(salario > 1903.98 && salario < 2826.65){
        printf("Primeira Faixa Salarial\n");
        printf("O imposto sera de: %f no seu salario\n",(salario * 0.075));
        salarioAliquota = salario - (salario * 0.075);
        printf("O seu imposto de renda de acordo com o seu salario de %.2f, sera de: %.2f", salario, salarioAliquota);
    }else if(salario > 2826.65 && salario < 3751.05){
        printf("Segunda Faixa Salarial\n");
        printf("O imposto sera de: %f no seu salario\n",(salario * 0.15));
        salarioAliquota = salario - (salario * 0.15);
        printf("O seu imposto de renda de acordo com o seu salario de %.2f, sera de: %.2f", salario, salarioAliquota);
    }else if(salario > 3751.05 && salario < 4664.68){
        printf("Terceira Faixa Salarial");
        printf("O imposto sera de: %f no seu salario\n",(salario * 0.225));
        salarioAliquota = salario - (salario * 0.225);
        printf("O seu imposto de renda de acordo com o seu salario de %.2f, sera de: %.2f", salario, salarioAliquota);
    }else{
        printf("Quarta Faixa Salarial");
        printf("O imposto sera de: %f no seu salario\n",(salario * 0.275));
        salarioAliquota = salario - (salario * 0.275);
        printf("O seu imposto de renda de acordo com o seu salario de %.2f, sera de: %.2f", salario, salarioAliquota);
    }

    return 0;
}