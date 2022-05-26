//verificar usuari e senha com wihle
//cost char usuario = marcos, senha = paylivre;
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void main(){
	const char u[] ="marcos", s[]= "paylivre";
    char nome[100], senha[100];
    while(1){
	printf("\n escreva seu usuario\n");
    scanf("%s",&nome);
    printf("\n escreva sua senha\n");
    scanf("%s",&senha);
    if((strcmp(u,nome) == 0)&&(strcmp(s,senha) == 0)){
		printf("\n bem vindo ao sistema %s", nome);
		break;
	}else{
		printf("\n usuario ou senha errada tente novamente \n");
	}
	} 

}