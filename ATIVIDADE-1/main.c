#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    int peso1, peso2, peso3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%d", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%d", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o peso da terceira nota: ");
    scanf("%d", &peso3);

    if (peso1 == 0 || peso2 == 0 || peso3 == 0) {

        printf("\nErro: nenhum peso pode ser 0.\n");

    } else {

        media = ((nota1 * peso1) +
                 (nota2 * peso2) +
                 (nota3 * peso3)) /
                 (peso1 + peso2 + peso3);

        printf("\nMedia: %.2f\n", media);

        if (media >= 6) {
            printf("Situacao: Aprovado\n");
        } else if (media >= 4) {
            printf("Situacao: Exame\n");
        } else {
            printf("Situacao: Reprovado\n");
        }
    }

    return 0;
}