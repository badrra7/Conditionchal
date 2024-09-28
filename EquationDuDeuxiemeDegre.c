
#include <stdio.h>
#include <math.h>


int main() {
    
    int aa,bb,cc,del;
    float x1,x2;
    printf("Entrer la valeur de A:");
    scanf("%d",&aa);
    printf("Entrer la valeur de B:");
    scanf("%d",&bb);
    printf("Entrer la valeur de C:");
    scanf("%d",&cc);
    
    del = pow(bb,2)-(4*aa*cc);

    if (del > 0) {
    x1 = (-bb+sqrt(del))/2*aa;
    x2 = (-bb-sqrt(del))/2*aa;

    printf("Cette Equation Admet deux solution:\n");
    printf("La Premiere Solution est X1 = %.2f \n",x1);
    printf("La Deuxieum Solution est X2 = %.2f \n",x2);
     }
     else if (del == 0) {
        x1 = (-bb)/2*aa;
        printf("Cette Equation Admet une seul solution:\n");
        printf("La Solution est X1 = %.2f:",x1);
     }
     else if (del < 0) {
        printf("Cette Equation n'admet pas des solution.");
     }


    return 0;
}