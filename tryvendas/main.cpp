#include <iostream>

int main() {
    int vendedor
    printf("Id do vendedor: ");
    scanf("%d", &vendedor);
    float venda, comissao, porcentagem;
    printf("valor da venda:");
    scanf("%f",&venda);
    printf("base percentual de comissao: ", &porcentagem);

    comissao= venda * (porcentagem/100);

    printf("Comissao do vendedor %d foi %.2f",vendedor,comissao);

    return 0;


}
