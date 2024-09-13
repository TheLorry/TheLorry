#include <iostream>
int main() {
    float vv,cmf,pct,mm,vf;
    printf("manda numero");
    scanf("%f",&vv);
    if (vv<=2500.01) {
        pct=0.017;
        cmf=30;
        vf=vv+cmf+(vv*pct);
        if (vf-vv<=39){
            vf=39;
    }else if (vv<=6250) {
        pct=0.066;
        cmf=56;
        vf=vv+cmf+(vv*pct);
    }else if (vv<=20000) {
        pct=0.034;
        cmf=76;
        vf=vv+cmf+(vv*pct);
    }else if ( vv<=50000) {
        pct=0.022;
        cmf=100;
        vf=vv+cmf+(vv*pct);
    }else if ( vv<=500000) {
        pct=0.011;
        cmf=155;
        vf=vv+cmf+(vv*pct);
    }else if (vv>500000.00) {
        pct=0.009;
        cmf=255;
        vf=vv+cmf+(vv*pct);
    }

    printf("O valor ede venda é de R$%.2f\n e seguindo a tabela as comicoes sao de R$%.2f fixos e R$%.2f\n totalizando R$%.2f",vv,cmf,pct,vf);
    }else
   // printf("vv%.2f pct%f cmf%.2f vf%.2f",vv,pct,cmf,vf);
    printf("O valor ede venda é de R$%.2f\n e seguindo a tabela as comicoes sao de R$%.2f fixos e R$%.2f\n totalizando R$%.2f",vv,cmf,pct,vf-vv);
    return 0;
}
