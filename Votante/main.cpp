#include <iostream>
#include <stdio.h>

int main() {
    int contador = 0,;  //literalmente só pra contar as voltas no loop
    int c1 = 0, c2 = 0, c3 = 0;  // contadores de votos por candidato.
    int l;  // Variável "limpa" para armazenar o voto do usuário.
    char v;
    while (contador < 4) {
        printf("Vote em um dos candidatos:\n1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n");
        scanf("%d", &l);

        // a ideia é ter um loop com saida condicional
        if (l == 1) {
            c1++;
        }
        else if (l == 2) {
            c2++;
        }
        else if (l == 3) {
            c3++;
        }
        else {
            printf("Voto inválido! Por favor, vote em 1, 2 ou 3.\n");
        }

        contador++;  // fim do loop dê outra volta
    }
if (c1<c2 && c1<c3)
    v=c1;
    else if (c2<c1 && c2<c3)
        v=c2;
    else if (c3<c1 && c3<c2)
        v=c3
    // Exibe os resultados da votação.
    printf("\nResultados da votação:\n");
    printf("Candidato 1: %d votos\n", c1);
    printf("Candidato 2: %d votos\n", c2);
    printf("Candidato 3: %d votos\n", c3);

    return 0;
}

