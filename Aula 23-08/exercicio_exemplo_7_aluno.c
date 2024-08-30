#include <stdio.h>

int main(){
    float n1 = 0, n2 = 0, m = 0;
    int faltas = 0;

    printf("Situacao do Aluno \n");

    printf("Notas? ");
    scanf("%f %f",&n1,&n2);

    m = (n1 + n2)/2;

    printf("Faltas? ");
    scanf("%i", &faltas);

    if(faltas > 5 || m < 4){
        puts("Reprovado");
    }else{
        if(faltas <=5 && m >= 6){
            puts("Aprovado");
        }else{
            puts("Recuperacao");
        }
    }


    return 0;
}