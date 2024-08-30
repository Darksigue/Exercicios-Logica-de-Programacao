#include <stdio.h>

int main(){
    float n1 = 0, n2 = 0, m = 0;
    int faltas = 0;

    printf("Aprovacao ou reprovacao\n");

    printf("Entre com a primeira e a segunda nota: ");

    scanf("%f %f",&n1,&n2);

    printf("Entre com as faltas: ");

    scanf("%i",&faltas);

    m = (n1 + n2)/2;

    if(m>=6){
        if(faltas <=5){
            printf("Voce foi aprovado com a media %1.f e foi aprovado por presenca",m);
        }else{
            printf("Voce foi reprovado por %i faltas",faltas);
        }
    }else{
        if(faltas <=5){
            printf("Voce foi reprovado por media %1.f",m);
        }else{
            printf("Voce foi reprovado por media %1.f e faltas %i",m);
        }
    }

    return 0;
}