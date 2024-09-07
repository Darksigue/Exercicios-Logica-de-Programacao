#include <stdio.h>

int main() {
    float temperaturas[4];

    for(int i = 0; i < 4; i++) {
        printf("Insira o valor de temperatura[%d] ", i);
        scanf("%f", &temperaturas[i]);
    }

    for(int i = 0; i < 4; i++) {
        printf("Temperatura[%d] %.1f\n", i, temperaturas[i]);
    }

    return 0;
}
