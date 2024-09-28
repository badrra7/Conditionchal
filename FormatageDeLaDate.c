#include <stdio.h>

int main() {

    int jj,mm,yy;
    printf("Entrer le jour:");
    scanf("%d",&jj);
    printf("Entrer le mois:");
    scanf("%d",&mm);
    printf("Entrer l'année:");
    scanf("%d",&yy);

    switch (mm) {
    case 1:
        printf("%d-janvier-%d",jj,yy);
        break;
    case 2:
        printf("%d-février-%d",jj,yy);
        break;
    case 3:
        printf("%d-mars-%d",jj,yy);
        break;
    case 4:
        printf("%d-avril-%d",jj,yy);
        break;
    case 5:
        printf("%d-mai-%d",jj,yy);
        break;
    case 6:
        printf("%d-juin-%d",jj,yy);
        break;
    case 7:
        printf("%d-juillet-%d",jj,yy);
        break;
    case 8:
        printf("%d-août-%d",jj,yy);
        break;
    case 9:
        printf("%d-septembre-%d",jj,yy);
        break;
    case 10:
        printf("%d-octobre-%d",jj,yy);
        break;
    case 11:
        printf("%d-novembre-%d",jj,yy);
        break;
    case 12:
        printf("%d-décembre-%d",jj,yy);
        break;
    }
    return 0;
}