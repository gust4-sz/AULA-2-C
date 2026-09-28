#include <stdio.h>

int main() {

    float nota;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    for (int i = 1; i <= 10; i++) {

        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 6) {
            aprovados++;
        } else if (nota >= 4) {
            exame++;
        } else {
            reprovados++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}