a) Desenvolva uma função com o nome primo. Esta função deve ter um
parâmetro do tipo inteiro e deve retornar um valor booleano para informar
se o valor do parâmetro é ou não um número primo.
b) Implemente um programa que peça para o usuário fornecer dois números
inteiros (N1 e N2) e imprima na tela todos os números primos existentes
entre estes dois números (inclua também na verificação os valores de N1 e
N2). Seu programa deverá fazer uso da função definida no item (a).

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
    if (num <= 1) {
        return false; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int N1, N2;

    printf("Digite o primeiro número (N1): ");
    scanf("%d", &N1);

    printf("Digite o segundo número (N2): ");
    scanf("%d", &N2);

    if (primo(N1)) {
        printf("%d é um número primo.\n", N1);
    } else {
        printf("%d não é um número primo.\n", N1);
    }

    if (primo(N2)) {
        printf("%d é um número primo.\n", N2);
    } else {
        printf("%d não é um número primo.\n", N2);
    }

    printf("Números primos entre %d e %d:\n", N1, N2);
    for (int i = N1; i <= N2; i++) {
        if (primo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

