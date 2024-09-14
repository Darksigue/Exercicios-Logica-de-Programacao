#include <stdio.h>

int main() {

    struct nomeFuncionario {
        char nome[30];
        char sobrenome[30];
    };

    struct endereco {
        char rua[50];
        int num;
        int cep;
        char bairro[30];
        char cidade[30];
        char estado[2]; 
        char pais[30];
    };
    
    struct registroFuncionario {
        struct nomeFuncionario nomeFuncionario;
        char funcao[30];
        int numeroDependente;
        float salario;
        struct endereco endereco;
    };

    struct nomeFuncionario f1 = {
        "Joao",
        "Sigue"
    };
    
    struct endereco end1 = {
        "Rua 1",
        1,
        94783,
        "Bairro 1",
        "Cidade 1",
        "SP",
        "Brasil"
    };
    
    struct registroFuncionario r1 = {
        f1,
        "Desenvolvedor",
        1,
        1000.3f,
        end1
    };

    printf("Nome: %s %s\n", r1.nomeFuncionario.nome, r1.nomeFuncionario.sobrenome);
    printf("Funcao: %s\n", r1.funcao);
    printf("Numero de Dependentes: %d\n", r1.numeroDependente);
    printf("Salario: %.2f\n", r1.salario);
    printf("Endereço:\n");
    printf("  Rua: %s\n", r1.endereco.rua);
    printf("  Numero: %d\n", r1.endereco.num);
    printf("  CEP: %d\n", r1.endereco.cep);
    printf("  Bairro: %s\n", r1.endereco.bairro);
    printf("  Cidade: %s\n", r1.endereco.cidade);
    printf("  Estado: %s\n", r1.endereco.estado);
    printf("  Pais: %s\n", r1.endereco.pais);

    return 0;
}