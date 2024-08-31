#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int c, n = rand()%7 + 1; //Randomizador de números até 7
    printf("rand %d \n", rand());
    printf("Numero aleatorio %d \n", n);
    do{
        printf("Chute entre 1 e 7: ");
        scanf("%d", &c);

        if(c>n) printf("Numero muito alto\n");
        else if(c<n) printf("Numero muito baixo\n");
        else printf("O numero esta correto!\n");
    }while(n!=c); //Se o número for diferente do que foi dito

    return 0;
}