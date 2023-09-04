#include <stdio.h>
#include <stdbool.h>

bool divisor(int N, int D) {
    if (D == 0) {
        return false;
    }
    return (N % D == 0);
}

int num_divisores(int M) {
    int cont = 0;
    for (int i = 1; i <= M; i++) {
        if (divisor(M, i)) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int quantidadeDivisores = num_divisores(numero);

    printf("O número %d possui %d divisores.\n", numero, quantidadeDivisores);

    return 0;
}
