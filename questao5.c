#include <stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);

    int S = (N % 2 == 0) ? 0 : 1;
        
    printf("%d\n", S);

    return 0;
}