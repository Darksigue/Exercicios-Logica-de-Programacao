#include <stdio.h>

int main(){
    int a = 0, b = 0;

    printf("Numero maior\n");

    printf("Entre com os numeros de comparacao: ");
    scanf("%i %i",&a, &b);

    printf("O maior eh: %i", a>b ? a : b);

    return 0;
}