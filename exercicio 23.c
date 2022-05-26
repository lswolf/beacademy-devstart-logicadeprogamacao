//saldo iniccial de  1000 e saques continuos de 150 até que não possa mais tirar 
#include <stdio.h>
void main(){

    int saldo =1000;
    char s;
	while(1){ 
    printf("\n sacar? Y/N \n");
    scanf(" %c",&s);
    if (s=='N'){
 	 break;
    }
    if(saldo>=150){
		saldo-=150;
		printf("sacado o seu saldo agora e %d",saldo);
	}
    else{
		printf("nao ha saldo suficiente");
		break;
	}
	}
}