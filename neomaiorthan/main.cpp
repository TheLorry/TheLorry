#include <iostream>

int main() {
    int n1, n2, n3, temp;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);
    if (n1>n2 && n1>n3)
        printf("the bigest is %d\n second is%d\n third is %d\n",n1,n2,n3);
    else
        if (n2>n1 && n2>n3){
            printf("the bigest is %d\n",n2);
        }else
            if (n3>n2 && n3>n1){
                printf("the bigest is %d\n",n3);
            }


    return 0;
}