// com swicth crie um progama que receba do usuario a figura geometrica que deseja usar e calcule a era e o perimetro, q quadrado e t triangulo e calcule e exiba os resultados 
//Area do quadrado l*l 
//Area do triangulo base * altura
#include <stdio.h>
void main(){
    char op;
    float num1, num2, num3, h, area, peri; 
    printf("escreva a figura geometrica desejada (Q para quadrado e T para triangulo)\n");
    scanf("%c",&op);
   
    switch(op){
        case 'Q':
		printf("\nescreva a medida do lado do quadrado\n");
    	scanf("%f",&num1);
    	area = num1*num1;
    	peri = num1*4;
        printf("o perimetro e: %f  e a area e %f", peri,area);
        break;
        case 'T':
  		printf("\nescreva a medida da base do triangulo\n");
    	scanf("%f",&num1);
    	printf("\nescreva a medida do lado direito do triangulo\n");
    	scanf("%f",&num2);
    	printf("\nescreva a medida do lado esquerdo do triangulo\n");
    	scanf("%f",&num3);
    	printf("\nescreva a medida da altura do triangulo\n");
    	scanf("%f",&h);
        area = num1*h;
    	peri = num1+num2+num3;
        printf("o perimetro e: %f  e a area e %f", peri,area);
        break;
        
        default:
            printf("operacao invalida");
            break;
    }

    
}