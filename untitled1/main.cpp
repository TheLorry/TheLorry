#include <stdio.h>

int main() {
// Voce pode declarar mais de uma var do mesmo tipo na mesma linha
   float dolar, euro, taxa;
   taxa=0.98;
   //textinho
   printf("conversor de moedas\n");
   //pede valor e atribui valor
   printf("insira o valor em dolares");
   scanf("%f", &dolar);
   //passa valor fixo com 2 digitos pos virgula
   printf("taxa de rating dolar ~ euro fixada em %f\n", taxa);
   //queijo contagem
   euro = dolar / taxa;

   //faz o L
   printf("Valor Convertido: %2.f Euros\n", euro);





 }


