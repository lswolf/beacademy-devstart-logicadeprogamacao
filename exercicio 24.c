//solicida o nome e o preço de 10 produtos armazena em 1 vetor e imprime no final 
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void main(){
    char *nome[10][30];
    int valor[10], i;
    for (i=0; i<10; i++) {
	printf("\n escreva o produto\n");
    scanf("%s",&nome[i]);
    printf("\n escreva o valor\n");
    scanf("%d",&valor[i]);
	}
	 for (i=0; i<10; i++) {
	 	printf("\n Produto: %s , valor: %d \n",nome[i],valor[i]);
	 }

}