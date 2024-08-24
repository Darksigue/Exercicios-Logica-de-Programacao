#include <stdio.h>

int main(){
    float a = 0, b = 0, c = 0;

    printf("Tipo de triangulo \n");

    printf("Numeros? ");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        if(a == b && b == c){
            printf("triangulo equilatero");
        }
        else if(a == b || b == c || c == a){
            printf("triangulo isosceles");
        }
        else{
            printf("Triangulo escaleno");
        }
    }

    return 0;
}