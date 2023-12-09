#include <stdio.h>

int main(){
    double raio, volumeTotal;
    scanf("%lf", &raio);
    
    volumeTotal = (4.0 / 3.0) * 3.14159 * raio * raio * raio;
    printf("VOLUME = %.3lf\n", volumeTotal);

    return 0;
}