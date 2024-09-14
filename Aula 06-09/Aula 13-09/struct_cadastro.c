#include <stdio.h>
#include <conio.h>

// Definição da struct reg_nome
typedef struct reg_nome
{
    char nome_f[40];
    char sobre_nome[40];
} nome;

// Definição da struct reg_endereco
typedef struct reg_endereco
{
    char rua[40];
    int numero;
    char complemento[20];
    int cep;
    char bairro[30];
    char cidade[30];
    char estado[30];
} endereco;

// Definição da struct registro_funcionario
struct registro_funcionario
{
    struct reg_nome nome;
    char funcao[30];
    float salario;
    int dependentes;
    struct reg_endereco endereco;
};

struct registro_funcionario cad_funcionario[2];

int main(void)
{
    int i;
    printf("\n------ Cadastro de Funcionário ------\n\n\n");

    for (i = 0; i < 2; i++)
    {
        printf("Digite Nome do Funcionario ......: ");
        fflush(stdin);
        gets(cad_funcionario[i].nome.nome_f);

        printf("Digite Sobre Nome do Funcionario ......: ");
        fflush(stdin);
        gets(cad_funcionario[i].nome.sobre_nome);

        printf("Digite Funcao do Funcionario ......: ");
        fflush(stdin);
        gets(cad_funcionario[i].funcao);

        printf("Digite Salario do Funcionario ......: ");
        scanf("%f", &cad_funcionario[i].salario);
        printf("Digite Numero de Dependentes do Funcionario .... ");
        scanf("%d", &cad_funcionario[i].dependentes);

        printf("Digite o Endereco do Funcionario......: \n");
        printf("Digite o Nome da Rua ................: ");
        fflush(stdin);
        gets(cad_funcionario[i].endereco.rua);

        printf("Digite o Numero da Rua ...............: ");
        scanf("%d", &cad_funcionario[i].endereco.numero);

        printf("Digite o Complemento da Rua ..........: ");
        fflush(stdin);
        gets(cad_funcionario[i].endereco.complemento);

        printf("Digite o Cep da Rua ..................: ");
        scanf("%d", &cad_funcionario[i].endereco.cep);

        printf("Digite o Bairro da Rua ...............: ");
        fflush(stdin);
        gets(cad_funcionario[i].endereco.bairro);

        printf("Digite a Cidade da Rua ...............: ");
        fflush(stdin);
        gets(cad_funcionario[i].endereco.cidade);
        printf("Digite o Estado da Rua ...............: ");
        fflush(stdin);
        gets(cad_funcionario[i].endereco.estado);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\n Dados do Funcionario %d ", i);
        printf("\n Nome do Funcionario .................: %s", cad_funcionario[i].nome.nome_f);
        printf("\n Sobre Nome do Funcionario ...........: %s", cad_funcionario[i].nome.sobre_nome);
        printf("\n Funcao do Funcionario ...............: %s", cad_funcionario[i].funcao);
        printf("\n Salario do Funcionario ..............: %f", cad_funcionario[i].salario);
        printf("\n Numero de Dependentes do Funcionario : %d", cad_funcionario[i].dependentes);
        printf("\n Endereco do Funcionario .............: %s", cad_funcionario[i].endereco.rua);
        printf("\n Numero da Rua .......................: %d", cad_funcionario[i].endereco.numero);
        printf("\n Complemento da Rua ..................: %s", cad_funcionario[i].endereco.complemento);
        printf("\n Cep da Rua ..........................: %d", cad_funcionario[i].endereco.cep);
        printf("\n Bairro da Rua .......................: %s", cad_funcionario[i].endereco.bairro);
        printf("\n Cidade da Rua .......................: %s", cad_funcionario[i].endereco.cidade);
        printf("\n Digite o Estado da Rua ..............: %s", cad_funcionario[i].endereco.estado);
    }

    // fim do for da impressão
    getch();
    return 0;
}