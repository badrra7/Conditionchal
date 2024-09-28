#include <stdio.h>

int main() {

    int num,divv;
    printf("Entrer le nombre:");
    scanf("%d",&num);
    
    divv = num % 2;
    if (divv == 0) {
        printf("Cette nombre est paire");
    }
    else {
        printf("Cette nombre est impaire");
    }

    return 0;
}