
#include <iostream>

int main() {
    int num;
    printf("manda um numero");
    scanf("%d", &num);
    if(num%2!=0 && num<50 || num%2!=0 && num<50) {
        printf("SIM");
    }else {
        if (num%2!=0 && num>50 ||num%2==0 && num<10)
            printf("NAO");
        }

    }



    return 0;
}
