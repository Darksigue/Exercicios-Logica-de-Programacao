#include <stdio.h>

int main() {
    struct struct_ficha_do_aluno {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };

    // Declaração da variável aluno com o tipo correto
    struct struct_ficha_do_aluno aluno = {
        "Joao Paulo Akira Sigue",
        "Logica de Programacao",
        8.5,
        9.0
    };

    // Impressão dos dados do aluno
    printf("Nome: %s\n", aluno.nome);
    printf("Disciplina: %s\n", aluno.disciplina);
    printf("Primeira Nota: %.1f\n", aluno.nota_prova1);
    printf("Segunda Nota: %.1f\n", aluno.nota_prova2);
    printf("Media das Provas: %.2f\n", (aluno.nota_prova1 + aluno.nota_prova2) / 2);

    return 0;
}
