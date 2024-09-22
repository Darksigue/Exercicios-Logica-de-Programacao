#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t t = time(NULL);


    srand((unsigned int)t);


    int randomValue = rand();

    printf("Valor aleatorio: %d\n", randomValue);

    return 0;
}
