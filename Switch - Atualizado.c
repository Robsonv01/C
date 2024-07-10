#include <stdio.h>
#include <ctype.h>


int main(void) {
 char letra;
  printf("Infome uma letra: ");
  scanf("%c", &letra);
switch(tolower(letra)){
  // #include <ctype.h> e tolowe(letra) para deixar a letra maiuscula e toupper(letra) para deixar a letra minuscula


  case 'a':
    

  case 'e':
    

    case 'o':

    
      case 'u':
    
     
        case 'i':
           printf("A letra é uma vogal");
        break;
 
    default:
      printf("É uma consoante");
}
  return 0;
}