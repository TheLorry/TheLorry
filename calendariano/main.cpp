#include <iostream>

int main() {
#include <stdio.h>

    int main() {
        int dia1, mes1, ano1;
        int dia2, mes2, ano2;
        int resultado = 0; // Variável para armazenar o resultado da comparação

        // manda a primeira data
        printf("Digite o dia, mes e ano da primeira data (DD MM AAAA): ");
        scanf("%d %d %d", &dia1, &mes1, &ano1);

        // manda a segunda data
        printf("Digite o dia, mes e ano da segunda data (DD MM AAAA): ");
        scanf("%d %d %d", &dia2, &mes2, &ano2);

        // Compara os anos
        if (ano1 > ano2) {
            resultado = 1; // Primeira data é maior
        } else if (ano1 < ano2) {
            resultado = 2; // Segunda data é maior
        } else {
            // Se os anos são iguais, compara os meses
            if (mes1 > mes2) {
                resultado = 1;
            } else if (mes1 < mes2) {
                resultado = 2;
            } else {
                // Se os meses são iguais, compara os dias
                if (dia1 > dia2) {
                    resultado = 1;
                } else if (dia1 < dia2) {
                    resultado = 2;
                }
            }
        }

        // acabooouu
        if (resultado == 1) {
            printf("A primeira data (%02d/%02d/%04d) é maior.\n", dia1, mes1, ano1);
        } else if (resultado == 2) {
            printf("A segunda data (%02d/%02d/%04d) é maior.\n", dia2, mes2, ano2);
        } else {
            printf("As datas são iguais.\n");
        }

        return 0;
    }

    return 0;
}
