#include <iostream>

int main() {
  int a;
  printf("ano alvo:");
  scanf("%d",&a);
//Check
  if (a%400!=0 || a%100==0 && a%4!=0)
    printf("oxi");
  else {
    printf("ok");
  }



  return 0;
}
