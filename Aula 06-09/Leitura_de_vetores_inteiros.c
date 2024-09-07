#include <stdio.h>


int main(){
    int tamanho_Vetor, *Vet_int[tamanho_Vetor][5];

    printf("Programa para ler um vetor nao ordenado\n");

    printf("Insira o tamanho_Vetor do vetor: ");
    scanf("%d",&tamanho_Vetor);

    for(int i = 0; i < tamanho_Vetor; i++) {
        printf("Insira os valores de vetor[%d]\n",i);
        scanf("%d",&Vet_int[i]);
    }

    for(int i = 0; i < tamanho_Vetor; i ++) {
        printf("Vetor[%i] = %i\n",i,Vet_int[i]);
    }

    return 0;
}