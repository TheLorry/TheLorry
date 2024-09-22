#include <iostream>

int main() {
  int a;
    printf("manda um numero: \n");
    scanf("%d", &a);
    if (a%2==0 && a>!=100 ) {
         //if (a>=100) {
            printf("Par de tamanho mini");
        }else{
            printf("Par de tamanho plus");
        }
    }else{
        if (a>=100) {
            printf("Impar de tamanho grande");
        }else{
            printf("Impar de tamanho pequenho");
        };
    }







    return 0;
}
