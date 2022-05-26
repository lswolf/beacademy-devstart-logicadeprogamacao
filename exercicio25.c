//crie um progama que permina cadastrasr os seguintes dados, nome, nota 1 e nota 2 e no final exibe todos os dados e a media e fala se ele foi aprovado ou naão na media 
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void main(){
    char *nome[10][30];
    int nota1[10], nota2[10],i;
    for (i=0; i<10; i++) {
	printf("\n escreva o nome\n");
    scanf("%s",&nome[i]);
    printf("\n escreva o valor\n");
    scanf("%d",&nota1[i]);
    printf("\n escreva o valor\n");
    scanf("%d",&nota2[i]);
	}
	 for (i=0; i<10; i++) {
	 	if((nota1[i]+nota2[i])/2 >= 6){
			 printf("\n Nome %s , nota 1 : %d , nota 2 : %d , media: %d , aprovado! \n",nome[i],nota1[i],nota2[i],(nota1[i]+nota2[i])/2);
		 }else{
			 printf("\n Nome %s , nota 1 : %d , nota 2 : %d , media: %d , reprovado =( \n",nome[i],nota1[i],nota2[i],(nota1[i]+nota2[i])/2);
		 }
	 	
	 }

}