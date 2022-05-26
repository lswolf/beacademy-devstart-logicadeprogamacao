#include <stdio.h>
void main(){
    char nome[100];
    float altura, peso, imc;
    printf("escreva seu nome\n");
    scanf("%s",&nome);
    printf("\n escreva seu peso em kilos\n");
    scanf("%f",&peso);
    printf("\n escreva sua altura em metros\n");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    printf("\n Nome: %s , Altura: %f , Peso: %f , IMC: %f  ", nome, altura, peso, imc);
    if(imc<19){
        printf("abaixo do peso");
    }else if((imc>=19)&&(imc<25)){
        printf("peso normal");
    }else if((imc>=25)&&(imc<30)){
        printf("sobrepeso");
    }else if((imc>=30)&&(imc<40)){
        printf("obesidade tipo 1");
    }else if(imc>40){
        printf("obesidade morbida");
    } 
}