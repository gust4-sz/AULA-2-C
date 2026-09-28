#include <stdio.h>

int main() {

    int numero;
    int continuar = 1;

    while (continuar == 1) {

        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        printf("\n--- Tabuada do %d ---\n", numero);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        printf("Escolha: ");
        scanf("%d", &continuar);
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}