#include <stdio.h>
void main(){
    char nome[100];
    int idade; 
    printf("escreva seu nome\n");
    scanf("%s",&nome);
    printf("\nescreva sua idade\n");
    scanf("%d",&idade);
    printf("\n Nome: %s , Idade: %d    ", nome, idade);
    if (idade<18){
        printf("menor de idade");
    } else if ((idade>=18)&&(idade<60)){
        printf("adulto");
    } else {
        printf("idoso");
    }
    
}