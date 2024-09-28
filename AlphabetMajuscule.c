#include <stdio.h>

int main()
{
    char car;

    printf("Entrer une charactere: ");
    scanf("%c", &car);


    if(car >= 'A' && car <= 'Z')
    {
        printf("Cette character est un alphabet majuscule.",car);
    }
    else if(car >= 'a' && car <= 'z')
    {
        printf("Cette character est un alphabet miniscule",car);
    }
    else
    {
        printf("La chose que j'ai entrée n'est pas une lettre",car);
    }

    return 0;
}