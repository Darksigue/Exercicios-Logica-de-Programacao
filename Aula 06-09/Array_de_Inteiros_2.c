#include <stdio.h>

int main(){
    // Definição e inicialização de um array de inteiros

    int numeros[5];

    for(int i = 0; i<5; i++) {
        printf("Leitura do %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    //Exibição dos elements do array

    for(int i = 0; i < 5; i++) {
        printf("Numeros[%d] = %d\n", i, numeros[i]);
    }


    return 0;
}