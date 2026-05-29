#include <stdio.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("insira a primeira nota:\n");
    scanf("%f", &nota1);    
    printf("insira a segunda nota\n");
    scanf("%f", &nota2);   
    printf("insira a terceira nota\n");
    scanf("%f", &nota3);   
    printf("insira a quarta nota\n");
    scanf("%f", &nota4);   

media = (+nota1 +nota2 +nota3  +nota4) / 4;
if (media >= 7) {
 printf("o aluno esta aprovado com media %.2f\n", media);
 }else {
printf("o aluno esta reprovado com media %.2f\n", media);
 

printf ("\n######################\n");
printf("endereço de memoria da variavel bitak %p \n", &nota1);
printf("endereço de memoria da variavel bitak %p \n", &nota2);
printf("endereço de memoria da variavel bitak %p \n", &nota3);
printf("endereço de memoria da variavel bitak %p \n", &nota4);



}
 

    return 0;
}
