#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"

int main (){
    int x , y , z;
    cabecalho();
    printf("digite um numero inteiro\n");
    scanf("%d",&x);
    printf("digite outro numero inteiro e tecle enter\n");
    scanf("%d",&y);
    z = soma(x,y);
    printf("o resultado da soma e %d\n", z);
    rodape();
    return 0;
}
