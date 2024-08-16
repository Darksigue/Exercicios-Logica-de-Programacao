/* PERIM.C - informa o perímetro da circunferência*/

#include <stdio.h>

main(){
    float raio, perim;

    printf("Qual e o raio? ");
    scanf("%f",&raio);

    perim = 2*3.14*raio;

    printf("Perimetro = %f\n",perim);

    getch();
}