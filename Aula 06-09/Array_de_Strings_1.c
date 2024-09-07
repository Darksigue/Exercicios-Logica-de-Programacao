#include <stdio.h>

int main(){
    const char *frutas[3] = {"Maca","Banana","Laranja"};

    for(int i = 0; i<3; i++) {
        printf("frutas[%i] = %s\n",i, frutas[i]);
    }

    return 0;
}