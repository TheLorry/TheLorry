#include <iostream>
#include <string.h>

int main() {
    char choice,tx[10];
    int q,r,c, a,rm1,rm2 ;
    printf("Selecione um objeto para calculo:\nq para quadrado\nr para retangulo\nc para circulo");
    scanf("%c",&choice);
    if (choice=='q') {
        printf("ok quadrado então, passa a medida de um lado pelo menos:\n");
        scanf("%d",&q);
        a=q*q;
        strcpy(tx, "quadrado");
    }else if (choice== 'r') {
        printf("vamo de retangulo, passa duas medidas: 1. lado: %d\n2.lado: %d");
        scanf("%d",&rm1, &rm2);
        a=rm1*rm2;
        strcpy(tx, "retangulo");
    }else if(choice=='c') {
        printf("ok, vamos de circulo...\nO que tu quer é pi..\n me passa o raio dessa bola: ");
        scanf("%f",&c);
        a=r*r*3.14;
        strcpy(tx, "circulo");
    }else if (choice!='c'&& choice!='q'&& choice!='r') {
        printf("nao fode!");
    }
printf("como pedido a medida de %s Tem medida %d",tx,a);




    return 0;
}
