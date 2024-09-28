
#include <stdio.h>


int main() {
    
    int num;
    printf("Entrer le nombre:");
    scanf("%d",&num);
    
    if (num > 0) {
    printf("Le nombre est positive.");
    }
     else if (num == 0) {
    printf("Le nombre est nul.");
     }
     else if (num < 0) {
        printf("Le nombre est negative.");
     }


    return 0;
}