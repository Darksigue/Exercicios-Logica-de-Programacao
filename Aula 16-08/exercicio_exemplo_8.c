#include <stdio.h>
#include <conio.h>
// Dada uma distância percorrida em quilômetros, e o total de litros de combustível gasto para percorrê-la, informe o consumo médio do veículo

main(){
    float km = 0, litros = 0;
    printf("Quilometros por litros\n");
    
    printf("Qual e a quantidade de quilometros percorrida?");
    scanf("%f", &km);

    printf("Qual e a quantidade de litros utilizada?");
    scanf("%f", &litros);

    printf("O consumo medio e de: %.1f", km/litros);

    getch();
}