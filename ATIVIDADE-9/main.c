#include <stdio.h>

int main() {

    int n;
    int anterior = 0;
    int atual = 1;
    int proximo;

    printf("Quantos termos deseja ver? ");
    scanf("%d", &n);

    printf("\nFibonacci: ");

    for (int i = 0; i < n; i++) {

        printf("%d ", anterior);

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    return 0;
}