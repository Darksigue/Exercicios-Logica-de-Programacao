#include <stdio.h>

int main() {
    float p1 = 0, p2 = 0, m = 0;
    char ra[50];

    printf("Qual eh o seu RA? ");
    scanf("%s", ra);

    printf("Quais foram as notas? ");
    scanf("%f %f", &p1, &p2);

    m = (p1 + p2) / 2;

    if (m >= 6) {
        printf("Seu RA eh %s e com a sua media de %f, voce foi aprovado por nota.\n", ra, m);
    } else {
        printf("Seu RA eh %s e com a sua media de %f, voce foi reprovado por nota.\n", ra, m);
    }

    return 0;
}
