#include <stdio.h>

int main(){
    int s = 0, n;

    do{
        printf("Numero? ");
        scanf("%d", &n);

        s += n;

        printf("Soma: %i\n",s);

    }while( n!= 0);

    printf("Soma Final = %d\n",s);

    return 0;
}