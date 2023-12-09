#include <stdio.h>

int main(){
    int golsDoInter, golsDoGremio, grenais = 0, vitoriasDoInter = 0, vitoriasDoGremio = 0, empates = 0, repetir;

    do{
      
        scanf("%d %d", &golsDoInter, & golsDoGremio);
        
        grenais++;

        if(golsDoInter > golsDoGremio){
            vitoriasDoInter++;
        }else if(golsDoGremio > golsDoInter){
            vitoriasDoGremio++;
        }else{
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao) ");
        scanf("%d", &repetir);

    }while (repetir == 1);

    
    printf("\n%d grenais\n", grenais);
    printf("Inter:%d\n", vitoriasDoInter);
    printf("Grêmio:%d\n", vitoriasDoGremio);
    printf("Empates:%d\n", empates);

    if(vitoriasDoInter > vitoriasDoGremio){
        printf("Inter venceu mais\n");
    }else if(vitoriasDoGremio > vitoriasDoInter){
        printf("Grêmio venceu mais\n");
    }else{
        printf("Nâo houve vencedor\n");
    }

    return 0;
}