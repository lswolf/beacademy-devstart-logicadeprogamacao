// receber numero e fazer a tabuada 
#include <stdio.h>
void main(){
    int num, vezes, i;
    printf("digite o numero para ser multiplicado\n");
    scanf("%d",&num);
    printf("digite o tamanho da tabuada\n");
    scanf("%d",&vezes);
    for(i=1;i<=vezes; i++ ){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    printf("fim da tabuada"); 
}