#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    
    srand(time(NULL));
    int ran = rand() % 7;
    switch (ran) {
        case 0:
        printf("Lundi");
        break;
        case 1:
        printf("mardi");
        break;
        case 2:
        printf("mercredi");
        break;
        case 3:
        printf("jeudi");
        break;
        case 4:
        printf("vendredi");
        break;
        case 5:
        printf("samedi");
        break;
        case 6:
        printf("dimanche");
        break;
    }

    

    return 0;
}