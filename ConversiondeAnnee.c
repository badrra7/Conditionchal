#include <stdio.h>

int main() {
    
    long long ann,mn,j,h,mm,s;
    printf("Entrer une année:");
    scanf("%lld",&ann);
    
    mm = ann*12;
    j = mm*30;
    h = j*24;
    mn = h*60;
    s = mn*60;
    printf("Ceci est le tableau de convertir:\n");
    printf("Mois:%lld\nJours:%lld\nHeures:%lld\nMinutes:%lld\nSecondes:%lld",mm,j,h,mn,s);

    return 0;
}