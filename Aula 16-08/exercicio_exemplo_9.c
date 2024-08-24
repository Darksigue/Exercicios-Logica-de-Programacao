#include <stdio.h>

//Dada uma temperatura em graus Fahrenheit (ºF), informe a correspondente em graus Celsius (ºC)[Dica: C = (F-32)*(5/9)]

main(){
    float temperatura = 0, celsius = 0;

    printf("Transformacao de Fahrenheit em Celsius");

    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f",&temperatura);

    celsius = (temperatura-32)*(5.0/9.0);
    printf("A temperatura em Celsius e: %.1f",celsius);
}