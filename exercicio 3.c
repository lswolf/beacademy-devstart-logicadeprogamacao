#include <stdio.h>
void main(){
    char nome[100];
    float altura, peso, imc;
    printf("escreva seu nome\n");
    scanf("%s",&nome);
    printf("\nescreva seu peso em kilos\n");
    scanf("%f",&peso);
    printf("\nescreva sua altura em metros\n");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    printf("\n Nome: %s , Altura: %f , Peso: %f , IMC: %f  ", nome, altura, peso, imc);

}