#include <stdio.h>
int main(){
    float deposito, aux;
    float saldo = 8000.00;
    printf("escreva o deposito\n");
    scanf("%f",&deposito);
    aux = saldo;
    saldo = deposito +saldo;
    printf(" saldo anterior: %.2f , saldo atual: %.2f , total depositado: %.2f  ", aux, saldo, deposito);
    return 0;
    
}