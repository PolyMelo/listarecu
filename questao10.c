#include <stdio.h>

int main(){

    int tempoViagem, velocidadeMedia;
    double litros; 

    scanf("%d", &tempoViagem);
    
    scanf("%d", &velocidadeMedia);

    litros = (tempoViagem * velocidadeMedia) / 12.0;

    printf("%.3lf\n", litros);

    return 0;
}