//crie uma planilha de 5 linhas por 4 colunas  e ai faça leitura dos valores numericos das primeiras 4 linhas e 3 colunas e ai popula o final com a soma dessas linhas e colunas
#include <stdio.h>
void main(){

    int valor[5][4], i , j, l = 0;
	for (i=0; i<4; i++) {
		for (j=0; j<3; j++) {
    		printf("\nescreva o numero\n");
   	   	    scanf("%d",&valor[i][j]);
		}
	}	
	l=0;
	for (i=0; i<4; i++) {
		for (j=0; j<3; j++) {
   	   	    l +=valor[i][j];
		}
		valor[i][3] = l;
		l=0;
	}	
   l=0;
   for (i=0; i<5; i++) {
		for (j=0; j<4; j++) {
   	   	    l +=valor[j][i];
		}
		valor[4][i] = l;
		l=0;
	}	
	
	for (i=0; i<5; i++) {
		for (j=0; j<4; j++) {
 		   printf("%d ", valor[i][j]);
		}
		printf("\n");
	}								   
}