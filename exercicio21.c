//criar um programa re queceba a idade de pesssoas e as classifique e saia do programa quando o usuario digitar -99 e contar os maiores de 60 e os menores de 18
#include <stdio.h>
void main(){

    int idade ,velhas = 0, novas = 0;
	while(1){ 
    printf("\nescreva sua idade\n");
    scanf("%d",&idade);
    
    if (idade==-99){
 	 break;
    }
    if (idade<18){
    	novas+=1;
    }
    if (idade>=60){
    	velhas+=1;
    }
    printf("\n Total parcial novas: %d , velhas: %d\n",novas,velhas);
	}
 printf("\n Total final novas: %d , velhas: %d\n",novas,velhas);
}