#include <stdio.h>

int main(void) {
  int escolha;
  double num1,num2, soma, mult, div, sair;

  
  printf("Escolha uma das opções\n ");
  printf("1 - Soma\n");
  printf("2 - Multiplicalçao\n");
  printf("3 - Divisão\n");
  printf("4 - Sair\n");
  scanf("%d", &escolha);

    switch(escolha) {
      case 1:
        printf("Informe o primeiro numero para somar\n");
        scanf("%lf", &num1);
        
        printf("Informe o segundo numero para somar\n");
        scanf("%lf", &num2);
        
        soma = num1 + num2;

      
        printf("A soma dos numeros é: %lf" , soma);
        break;
      case 2:
        printf("Informe o primeiro numero para multiplicar\n");
        scanf("%lf", &num1);
        printf("Informe o segundo numero para multiplicar\n");
        scanf("%lf", &num2);

        mult = num1 * num2;
        printf("A multiplicação dos numeros é: %lf" , mult);
        break;
      case 3:
        printf("Informe o primeiro numero para dividir\n");
scanf("%lf", &num1);
        printf("Informe o segundo numero para dividir\n");
        scanf("%lf", &num2);

        div = num1 / num2;

        if(num2 == 0 && num1 == 0) {
          printf("Não é possivel dividir por zero\n");
          
       
          
        }
          
        printf("A divisão dos numeros é: %lf" , div);
        
        break;
        
      case 4:
        printf("Saindo do programa\n");
        break;
      default:
        printf("Programa encerrado");

        
    }



  return 0;
}