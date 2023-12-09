#include <stdio.h>

int main() {
    char inicio_dia[4], fim_dia[4];
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_fim, hora_fim, minuto_fim, segundo_fim;
    
    scanf("%s %d", inicio_dia, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("%s %d", fim_dia, &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    int dias = dia_fim - dia_inicio;
    int horas = hora_fim - hora_inicio;
    int minutos = minuto_fim - minuto_inicio;
    int segundos = segundo_fim - segundo_inicio;

    
    if(segundos < 0){
        segundos += 60;
        minutos--;
    }

    if(minutos < 0){
        minutos += 60;
        horas--;
    }

    if(horas < 0){
        horas += 24;
        dias--;
    }
    
    printf("%d dia(s): %d hora(s), %d minuto(s), %d segundo(s)\n", dias, horas, minutos, segundos);
    
    return 0;
}