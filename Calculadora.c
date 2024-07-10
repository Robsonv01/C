#include <stdio.h>

int main(void) {
  int escolha;
  double num1, num2, soma, mult, div, sub, sair;


while (1) {  
  printf("\nEscolha uma das opções\n ");
  printf("1 - Soma\n");
  printf("2 - Subtrair\n");
  printf("3 - Multiplicalçao\n");
  printf("4 - Divisão\n");
  printf("5 - Sair\n");
  scanf("%d", &escolha);

  if (escolha == 5) {
    printf("Saindo do programa\n");
    break;
  }
  if (escolha < 1 || escolha > 5) {
    printf("Opção invalida\n");
    break;
  }
    

    switch(escolha) {
      case 1:
        printf("Informe o primeiro numero para somar\n");
        scanf("%lf", &num1);
        
        printf("Informe o segundo numero para somar\n");
        scanf("%lf", &num2);
        
        soma = num1 + num2;
      
        printf("nA soma dos numeros é: %lf" , soma);
  
       break;
    
      case 2:
      printf("Informe o primeiro numero para subtrair\n");
      scanf("%lf", &num1);
      printf("Informe o segundo numero para Subtrair\n");
      scanf("%lf", &num2);

      sub = num1 - num2;
        
      printf("A subtração dos numeros é: %lf" , sub);
        
      break;
      
      case 3:
        printf("Informe o primeiro numero para multiplicar\n");
        scanf("%lf", &num1);
        printf("Informe o segundo numero para multiplicar\n");
        scanf("%lf", &num2);

        mult = num1 * num2;
        printf("A multiplicação dos numeros é: %lf" , mult);
        break;
      
      case 4:
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
        
      case 5:
        printf("Saindo do programa\n");
        break;
      
     
  

        
    }

}

  return 0;
}
