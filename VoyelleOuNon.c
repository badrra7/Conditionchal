#include <stdio.h>

int main() {
    
    char cari;
    printf("Entrer le caractere:");
    scanf("%c",&cari);
    
   switch (cari) {
  case ('a'):
    printf("Cette caractère est un voyelle");
    break;
  case ('e'):
    printf("Cette caractère est un voyelle");
    break;
  case ('i'):
    printf("Cette caractère est un voyelle");
    break;
    case ('o'):
    printf("Cette caractère est un voyelle");
    break;
  case ('u'):
    printf("Cette caractère est un voyelle");
    break;
  case ('y'):
    printf("Cette caractère est un voyelle");
    break;
  default:
    printf("Cette caractère n'est pas un voyelle");
   }
    

    return 0;
}