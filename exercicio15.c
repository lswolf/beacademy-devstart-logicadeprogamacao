// exercicio 11 só que repete o progama quantas vezes quiser com for

#include <stdio.h>
void main(){
    float deposito, aux;
    float saldo = 8000.00;
    int op, agencia , conta, repe, i ;
    char banco[100];
    printf("quantas operaçoes gostaria de realizar?\n");
        scanf("%d", &repe);
    for(i=1;i<=repe;i++){    
   while (1){
    printf("\n escolha a operacao: 1 para saque , 2 para deposito e 3 para transferencia \n");
    scanf("%d",&op);
    if((op == 1)||(op == 2)||(op == 3)){
        break;
    }else{
        printf("\n invalido digite novamente \n");
    }
    }
    printf("escreva o valor\n");
    scanf("%f",&deposito);
    aux = saldo;
    switch(op){
        case 1:
        saldo -= deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total sacado: %f  ", aux, saldo, deposito);
        break;
        case 2:
        saldo += deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total depositado: %f  ", aux, saldo, deposito);
        break;
        case 3:
        printf("\n insira o nome do banco do destinatario\n");
        scanf("%s", &banco);
        printf("\n insira a agencia do destinatario\n");
        scanf("%d", &agencia);
        printf("\n insira a conta banco do destinatario\n");
        scanf("%d", &conta);
        saldo -= deposito;
        printf("\n saldo anterior: %f , saldo atual: %f , total transferido: %f  ", aux, saldo, deposito);
        printf("\n Info do destinatario: Banco: %s , Agencia: %d , Conta: %d  ", banco, agencia, conta);

    }
	}
}