//criar uma matriz e some a diagonal principal e secundaria 
#include <stdio.h>
void main(){

    int valor[5][5], i , j, dp = 0, ds = 0;
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
    		printf("\nescreva o numero\n");
   	   	    scanf("%d",&valor[i][j]);
		}
	}	
    for (i=0; i<5; i++) {
    	dp = dp + valor[i][i];
    	printf("%d\n", valor[i][i]);
	}
 	for (i=0; i<5; i++) {	
    	ds = ds + valor[i][4-i];
	
	}
	printf(" a diagonal primaria deu %d e a secundaria %d \n",dp,ds);
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
 		   printf("%d ", valor[i][j]);
		}
		printf("\n");
	}								   
}