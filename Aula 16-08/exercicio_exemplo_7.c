#include <stdio.h>

//Dadas as duas notas de prova de um aluno, informa a sua média

main(){
    float nota1 = 0, nota2 = 0;

    printf("Media de Notas\n");

    printf("\nEntre com a primeira nota: ");
    scanf("%f",&nota1);

    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);

    printf("A media das notas e: %f", (nota1 + nota2)/2);

    getch();
}