#include <stdio.h>

int main(){
    const char *frutas[3][50];

    for(int i = 0; i < 3; i++) {
        printf("Insira a Fruta de frutas[%i]", i);
        scanf("%s", &frutas[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("frutas[%i] = %s\n", i, frutas[i]);
    }


    return 0;
}