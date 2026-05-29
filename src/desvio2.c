#include <stdio.h>

int main() {
    int ano;

    printf("digiter um ano e tecla nter\n");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("o ano e bisexto\n", ano);
    } else {
        printf("o ano e nao bisexto\n", ano);
    }
    return 0;
}
