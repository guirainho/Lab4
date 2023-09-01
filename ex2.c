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
