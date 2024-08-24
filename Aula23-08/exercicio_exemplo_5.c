#include <stdio.h>

int main(){
    int n1 = 0, n2 = 0;

    printf("Quais sao os numeros? ");
    scanf("%i %i", &n1,&n2);

    if(n1 > n2){
        printf("O numero %i eh maior que %i",n1, n2);
    }else{
        printf("O numero %i eh maior que %i",n2, n1);
    }   

    return 0;
}