#include <stdio.h>

int main(){
    char c;

    printf("Caractere: ");
    scanf("%c",&c);

    printf("ASCII em octal: %o\n",c);
    printf("ASCII em decimal: %d\n",c);
    printf("ASCII em hexadecimal: %X\n",c);
}