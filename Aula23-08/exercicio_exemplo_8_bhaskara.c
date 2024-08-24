#include <stdio.h>
#include <math.h>
int main(){
    float a = 0, b = 0, c = 0, r1 = 0, r2 = 0;

    printf("Equacao do segundo grau\n");
    
    printf("Entre com o a: ");
    scanf("%f",&a);

    if(a == 0){
        return "O a nao pode ter coeficiente 0";
    }    

    printf("Entre com o b: ");
    scanf("%f",&b);

    printf("Entre com o c: ");
    scanf("%f",&c);

    c = pow(b,2)-4*a*c;

    r1 = (-b + sqrt(c))/2*a;

    c = (-b - sqrt(c))/2*a;

    if(r1 == r2){
        printf("Ha uma raiz sendo ela: %f",r1);
    }else if(r1 != c && r1 > 0 && c > 0){
        printf("Ha duas raizes sendo elas: %f e %f", r1, c);
    }else{
        printf("Nao ha raizes com essa expressao");
    }

    return 0;
}