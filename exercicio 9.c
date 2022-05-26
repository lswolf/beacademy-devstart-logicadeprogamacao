//com shitch crie um progama que solicite ao usuario a operação desejada e implemente as operaçoes matematicas +-*/
#include <stdio.h>
void main(){
    char op;
    float num1, num2, res; 
    printf("escreva a operacao desejada (+,-,*,/)\n");
    scanf("%c",&op);
    printf("\nescreva o primeiro numero\n");
    scanf("%f",&num1);
    printf("\nescreva o segundo numero\n");
    scanf("%f",&num2);
    switch(op){
        case '+':
        res = num1 + num2;
        printf("o resultado e %f", res);
        break;
        case '*':
        res = num1 * num2;
        printf("o resultado e %f", res);
        break;
        case '/':
        res = num1 / num2;
        printf("o resultado e %f", res);
        break;
        case '-':
        res = num1 - num2;
        printf("o resultado e %f ", res);
        break;
        default:
            printf("operacao invalida");
            break;
    }

    
}