#include <stdio.h>

int main() {
   
    float not;
    printf("Entrer votre note:");
    scanf("%f",&not);

    if (not<10) {
        printf("vous avez recalé");
    }
    else if (not>=10 && not<12) {
        printf("La mension est: Passable");
    }
    else if (not>=12 && not<14) {
     printf("La mension est: Assez bien");
    }
    else if (not>=14 && not<16) {
        printf("La mension est: Bien");
    }
    else if (not>=16 && not<20) {
        printf("La mension est: Très Bien");
    }

    return 0;
}