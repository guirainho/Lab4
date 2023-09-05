#include <stdio.h>

double calcula_sigma(int n) {
    double resultado = 0.0;
    int sinal = 1;
    
    for (int k = 1; k <= n; k++) {
        double termo = sinal * (double)k / (k * k);
        resultado += termo;
        sinal = -sinal;
    }
    
    return resultado;
}

int main() {
    int n;
    printf("Digite um valor inteiro n: ");
    
    if (scanf("%d", &n) == 1) {
        double resultado = calcula_sigma(n);
        printf("O valor de sigma para N = %d é aproximadamente %.10lf\n", n, resultado);
    } else {
        printf("Por favor, digite um valor inteiro válido.\n");
    }
    
    return 0;
}
