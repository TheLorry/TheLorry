#include <iostream>

int main()
{
    int num;
    printf("manda um numero: \n");
    scanf("%d",&num);

    if (num%2!=0 && num<50 ||num%2==0 && num>10)
        printf("SIM");
    else
        printf("NAO");
// sim na v1 eu precisei de 2 entradas para não, pq eu só consegui usar OU direito nas entradas NAO lol
        //if (num%2!=0 && num>50 ||num%2==0 && num<10)
            //printf("NAO");
    return 0;
}
