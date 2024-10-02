#include <iostream>
#include <stdio.h>

int main() {
    int c1 = 0, c2 = 0, c3 = 0;  // Contadores para cada candidato
    int p1 = 0, p2 = 0, p3 = 0;  // Variáveis para votos consecutivos
    int l1, l2, l3, l4;          // Variáveis para armazenar os votos de cada eleitor.
    int last_vote = 0;           // Variável para verificar votos consecutivos.

    // Coleta de votos sem loop
    printf("Eleitor 1 vote (1, 2 ou 3):\n");
    scanf("%d", &l1);
    printf("Eleitor 2 vote (1, 2 ou 3):\n");
    scanf("%d", &l2);
    printf("Eleitor 3 vote (1, 2 ou 3):\n");
    scanf("%d", &l3);
    printf("Eleitor 4 vote (1, 2 ou 3):\n");
    scanf("%d", &l4);

    // Conta votos e verifica se há votos consecutivos para o mesmo candidato.
    if (l1 == 1) {
        c1++;
    } else if (l1 == 2) {
        c2++;
    } else if (l1 == 3) {
        c3++;
    } else {
        printf("Voto inválido do eleitor 1!\n");
    }
    last_vote = l1; //primeiro voto então last_vote repete l1

    // Eleitor 2
    if (l2 == 1) {
        c1++;
        if (last_vote == 1) {
            p1++;
        }
    } else if (l2 == 2) {
        c2++;
        if (last_vote == 2) {
            p2++;
        }
    } else if (l2 == 3) {
        c3++;
        if (last_vote == 3) {
            p3++;
        }
    } else {
        printf("Voto inválido do eleitor 2!\n");
    }
    last_vote = l2;

    // Eleitor 3
    if (l3 == 1) {
        c1++;
        if (last_vote == 1) {
            p1++;
        }
    } else if (l3 == 2) {
        c2++;
        if (last_vote == 2) {
            p2++;
        }
    } else if (l3 == 3) {
        c3++;
        if (last_vote == 3) {
            p3++;
        }
    } else {
        printf("Voto inválido do eleitor 3!\n");
    }
    last_vote = l3;

    // Eleitor 4
    if (l4 == 1) {
        c1++;
        if (last_vote == 1) {
            p1++;
        }
    } else if (l4 == 2) {
        c2++;
        if (last_vote == 2) {
            p2++;
        }
    } else if (l4 == 3) {
        c3++;
        if (last_vote == 3) {
            p3++;
        }
    } else {
        printf("Voto inválido do eleitor 4!\n");
    }

    // Verifica se há empate e aplica os votos consecutivos.
    if (c1 == c2 && c1 > c3)
        c1 += p1;
     else if (c1 == c3 && c1 > c2)
        c1 += p1;
     else if (c2 == c3 && c2 > c1)
        c2 += p2;


    // Exibição dos resultados.
    printf("Resultados finais:\n");
    printf("Candidato 1: %d votos\n", c1);
    printf("Candidato 2: %d votos\n", c2);
    printf("Candidato 3: %d votos\n", c3);

    // Determina e exibe o ganhador.
    if (c1 > c2 && c1 > c3) {
        printf("Candidato 1 é o vencedor!\n");
    } else if (c2 > c1 && c2 > c3) {
        printf("Candidato 2 é o vencedor!\n");
    } else if (c3 > c1 && c3 > c2) {
        printf("Candidato 3 é o vencedor!\n");
    } else {
        printf("Houve um empate entre dois ou mais candidatos!\n");
    }

    return 0;
}
