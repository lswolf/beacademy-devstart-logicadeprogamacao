//o total da soma ontida por numeros digitados

#include <stdio.h>
void main(){

    int valor ,total = 0;
	while(1){ 
    printf("\nescreva o numero\n");
    scanf("%d",&valor);
    if (valor==-99){
 	 break;
    }
    total+=valor;
    printf("\n Total parcial  %d \n",total);
	}
 printf("\n Total final  %d \n",total);
}