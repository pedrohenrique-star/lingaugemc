#include <stdio.h>

int main(){
    int n;
    printf("digite um numero inteiro e tecle enter\n");
    scanf("%d" ,&n);

    if(n % 2 == 0) {
        printf("o numero %d e par\n",n);
    }
    return 0;
}