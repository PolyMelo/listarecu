#include <stdio.h>

int main(){
    int qtd_produtos, codigo_produto, qtd_comprada;
    double total = 0;

    scanf("%d", &qtd_produtos);

    for (int i = 0; i < qtd_produtos; i++){

        scanf("%d %d", &codigo_produto, &qtd_comprada);

        switch(codigo_produto){
            case 1001:
                total += 1.50 * qtd_comprada;
                break;
            case 1002:
                total += 2.50 * qtd_comprada;
                break;
            case 1003:
                total += 3.50 * qtd_comprada;
                break;
            case 1004:
                total += 4.50 * qtd_comprada;
                break;
            case 1005:
                total += 5.50 * qtd_comprada;
                break;
            default:
                printf("Código de produto inválido.\n");
                return 1; 
        }
    }

    printf("%.2f\n", total);

    return 0;
}
