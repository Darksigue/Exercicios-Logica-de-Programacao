#include <stdio.h>

int main(){
    int n;

    printf("Numero? ");

    scanf("%d",&n); //Pede um valor que entrará no endereço de memória da variável n
    printf("Numero analisado: %i \n",n);

    while(n>0){ //Enquanto n for maior que 10

        printf("N antes do modulo: %i \n",n);

        printf("N depois do modulo: %i\n",n%10);  //Imprime o módulo de 10, dando o resto da divisão
        n /= 10; // N = n / 10
    }

    return 0;
}