#include <stdio.h>

int main() {
    
    int aa,bb,v1;

    printf("Entrer la valeur de A:");
    scanf("%d",&aa);
    printf("Entrer la valeur de B:");
    scanf("%d",&bb);

    if (aa == bb) {
     v1 = (aa+bb)*3;
     printf("La Resultat est: %d",v1);
    }
    else if (aa != bb) {
        v1 = aa+bb;
     printf("La Resultat est: %d",v1);
    }

    return 0;
}