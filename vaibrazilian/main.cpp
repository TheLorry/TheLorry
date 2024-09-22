#include <iostream>

int main() {
int v,gs,gm,sg,rc,yc;
    int v2,gs2,gm2,sg2,rc2,yc2;
    int t1,t2;

    printf("time 1 Tem quantas vitorias?\n");
    scanf_s("%d",&v);
    printf("blz, ele tem quantos gols sofridos?\n");
    scanf_s("%d",&gs);
    printf("E marcados?\n");
    scanf_s("%d",&gm);
    printf("Cartoes vermelhos?");
    scanf_s("%d",&rc);
    printf("Cartoes amarelos?");
    scanf_s("%d",&yc);

    printf("time 1 Tem quantas vitorias?\n");
    scanf_s("%d",&v2);
    printf("blz, ele tem quantos gols sofridos?\n");
    scanf_s("%d",&gs2);
    printf("E marcados?\n");
    scanf_s("%d",&gm2);
    printf("Cartoes vermelhos?");
    scanf_s("%d",&rc2);
    printf("Cartoes amarelos?");
    scanf_s("%d",&yc2);

    //printf("time 1:%d,%d,%d,%d,%d.\n",v2,gs2,gm2,rc2,yc2);
    //printf("time 2:%d,%d,%d,%d,%d",v,gs,gm,rc,yc);
    sg=gs-gm;
    sg2=gs2-gm2;
if (v>v2) {
    t1=+2;
}else if (v2>v) {
    t2=+2;
}else if (v==v2) {
    t1=+1;
    t2=+1;
}
    if (sg>sg2){
        t1=+2;
    }else if (sg2>sg) {
        t2=+2;
    }else if(sg==sg2){
        t1=+1;
        t2=+1;
    }
    if (rc>rc2) {
        t1=+2;
    }else if (rc2>rc) {
        t2=+2;
    }else if (rc=rc2) {
        t1=+1;
        t2=+1;
    }
    if (yc>yc2) {
        t1=+2;
    }else if (yc2>yc) {
        t2=+2;
    }else if (yc==yc2) {
        t1=+1;
        t2=+1;
    }
    //printf("%d e %d",t1,t2); //teste de contagem

    if (t1>t2)
        printf("vai t1");
    else if(t2>t1)
        printf("vai t2");
    else if(t1==t2)
        printf("empatou fudeu");







    return 0;
}
