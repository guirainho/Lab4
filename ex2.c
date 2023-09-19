
a) Desenvolva duas funções:
• a função c2f, que tem um único parâmetro (o valor da temperatura na escala Celsius)
e que retorna a temperatura convertida para a escala Fahrenheit;
• a função f2c, que tem um único parâmetro (o valor da temperatura na escala
Fahrenheit) e que retorna a temperatura convertida para a escala Celsius;
b) Implemente um programa que:
• peça para o usuário fazer uma escolha em um menu com duas opções:
(1) Converter de Celsius para Fahrenheit
(2) Converter de Fahrenheit para Celsius
• peça para o usuário fornecer o valor da temperatura que deve ser convertido;
• chame a função que faça a conversão solicitada e imprima na tela o valor retornado
pela função.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>

float c2f(float celsius){
  return ((1.8 * celsius) + 32);
}

float f2c(float faren){
  return ((faren - 32) / 1.8);
}

int main(){
  int opcao;
  float temperatura;
  
  printf("(1) Celsius -> Fahrenheit\n(2) Fahrenheit -> Celsius\nSua opção é: ");
  scanf("%d", &opcao);
  
  switch(opcao){
    case 1:
      printf("Digite a temperatura em Celsius: ");
      scanf("%f", &temperatura);
      printf("%.2f Celsius equivalem a %.2f Fahrenheit.\n", temperatura, c2f(temperatura));
      break;

    case 2:
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%f", &temperatura);
      printf("%.2f Fahrenheit equivalem a %.2f Celsius.\n", temperatura, f2c(temperatura));
      break;

    default:
      printf("Opção inválida.\n");
  }

  return 0;
}
