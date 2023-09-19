a) Defina uma função com três parâmetros de ponto flutuante que
retorne a soma dos valores desses parâmetros.
b) Implemente um programa que
• solicite que o usuário digite 3 valores numéricos;
• chame a função implementada no item (a) passando os 3 valores
digitados pelo usuário como argumentos;
• imprima na tela o valor retornado pela função.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>

float soma(float n1, float n2, float n3){
  return n1 + n2 + n3;

}

int main() {
  float n1, n2, n3, resultado;
  printf("Valor do 1° número: ");
  scanf("%f" , &n1);

  printf("Valor do 2° número: ");
  scanf("%f" , &n2);

  printf("Valor do 3° número: ");
  scanf("%f" , &n3);
  resultado = soma(n1, n2, n3);
  printf("O valor da soma é %.2f" , resultado);
  
  
}
