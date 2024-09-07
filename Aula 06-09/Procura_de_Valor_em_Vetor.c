#include <stdio.h>

int main(){
    int tamanho, vetor[tamanho], elemento;

    printf("Programa que indica se o valor eh encontrado no vetor\n");

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº elemento: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Insira o elemento a ser procurado: ");
    scanf("%d", &elemento);

    for(int i = 0; i < tamanho; i++) {
        if(elemento == vetor[i]) {
            return printf("O elemento %d foi encontrado no vetor.\n", elemento);
        }else{
            return printf("O elemento %d nao foi encontrado no vetor\n",elemento);
        }
    }

    return 0;
}