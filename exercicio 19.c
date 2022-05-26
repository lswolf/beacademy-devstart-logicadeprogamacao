// adicionar emprestimo
#include <stdio.h>
void main(){
    float deposito, aux;
    float saldo = 8000.00;
    int op, agencia , conta, repe, i ;
    char banco[100], esc;
    printf("quantas operacoes gostaria de realizar?\n");
        scanf("%d", &repe);
    for(i=1;i<=repe;i++){    
   while (1){
    printf("\n escolha a operacao: 1 para saque , 2 para deposito , 3 para transferencia e 4 para emprestimo \n");
    scanf("%d",&op);
    if((op == 1)||(op == 2)||(op == 3)||(op == 4)){
        break;
    }else{
        printf("\n invalido digite novamente \n");
    }
    }
    aux = saldo;
    switch(op){
        case 1:
  		printf("escreva o valor\n");
    	scanf("%f",&deposito);
    	
        saldo -= deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total sacado: %f  ", aux, saldo, deposito);
        break;
        case 2:
  		printf("escreva o valor\n");
    	scanf("%f",&deposito);
    	
        saldo += deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total depositado: %f  ", aux, saldo, deposito);
        break;
        case 3:
  		printf("escreva o valor\n");
    	scanf("%f",&deposito);
    	
        printf("\n insira o nome do banco do destinatario\n");
        scanf("%s", &banco);
        printf("\n insira a agencia do destinatario\n");
        scanf("%d", &agencia);
        printf("\n insira a conta banco do destinatario\n");
        scanf("%d", &conta);
        saldo -= deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total transferido: %f  ", aux, saldo, deposito);
        printf("\n Info do destinatario: Banco: %s , Agencia: %d , Conta: %d  ", banco, agencia, conta);
        break;
   	    case 4:
        printf("\n quanto vc gostaria de emprestimo \n");
        scanf("%f", &deposito);
        printf("\n aceita a taxa de emprestimo de 12%? Y/N \n");
        scanf(" %c", &esc );
        if ( esc == 'Y'){
            saldo = saldo + deposito;
            printf("\n saldo anterior: %f , saldo atual: %f , total emprestado: %f", aux, saldo, deposito);
        }else{
            printf("\n que pena que nao deseja");}
		break;

    }
	}
}
