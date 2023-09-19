a) Desenvolva uma função que receba um número inteiro N como parâmetro e
que imprima na tela a tabuada deste número.
b) Desenvolva um programa que chame a função desenvolvida para obter as
tabuadas de 1 a 9.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>
void tabuada(int N) {
    printf("Tabuada do número %d:\n", N);
    for (int i = 1; i <= 9; i++) {
        int resultado = N * i;
        printf("%d x %d = %d\n", N, i, resultado);
    }
    printf("\n");
}
int main() {
    int numero;
    do {
        printf("Digite um número de 1 a 9 para gerar a tabuada: ");
        scanf("%d", &numero);
        if (numero < 1 || numero > 9) {
            printf("Número fora do permitido. Tente novamente!\n");
        }
    } while (numero < 1 || numero > 9);
    tabuada(numero);
    return 0;
}
