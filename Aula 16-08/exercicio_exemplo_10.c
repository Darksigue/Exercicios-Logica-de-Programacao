#include <stdio.h>
#include <math.h>

int main(){
    float a = 0, b = 0, c= 0;

    printf("Pitagoras\n");

    printf("Entre com o primeiro lado: ");
    scanf("%f",&a);

    printf("\nEntre com o segundo lado: ");
    scanf("%f",&b);

    printf("\nA hipotenusa sera de: %f", sqrt(pow(a,2) + pow(b,2)));
}