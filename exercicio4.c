#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void main(){
    char nome[100], comp[] = "marcos";
    int idade; 
    printf("escreva seu nome\n");
    scanf("%s",&nome);
    printf("\nescreva sua idade\n");
    scanf("%d",&idade);
    printf("\n Nome: %s , Idade: %d \n" , nome, idade);
    if (idade>18){
        printf("A idade e maior que 18 anos \n");
    }
    if (idade!=25){
        printf("A idade nao e 25 \n");
    }
    if ((idade!=25)&&(strcmp(comp,nome) == 0)){
        printf("A idade nao e 25 mas o nome e marcos \n");
    }
    if ((idade!=25)||(strcmp(comp,nome) == 0)){
        printf("ou a idade nao e 25 ou o nome e marcos \n");
    }
    if(idade%2==0){
        printf("a idade e divisivel por 2\n");
    }

}