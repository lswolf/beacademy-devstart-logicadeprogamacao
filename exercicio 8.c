#include <stdio.h>
void main(){
    float deposito, aux;
    float saldo = 8000.00;
    int op;
    while (1){
    printf("escolha a operacao: 1 para saque e 2 para deposito\n");
    scanf("%d",&op);
    if((op == 1)||(op == 2)){
        break;
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
    }
}