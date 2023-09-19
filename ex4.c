a) Desenvolva uma função que receba dois números inteiros como parâmetros
(N e D) e que retorne um valor booleano indicando se D é um divisor de N.
b) Desenvolva uma função que receba um número inteiro como parâmetro
(M) e que retorne a quantidade de divisores que este número possui.
Observação: Esta função deverá utilizar a função anterior.
c) Desenvolva um programa que solicite um número inteiro e que, fazendo uso
da função do item anterior, apresente a quantidade de divisores deste
número.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

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
