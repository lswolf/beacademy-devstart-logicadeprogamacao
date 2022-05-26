// tabuada com wilhe
#include <stdio.h>
void main(){
    int num, vezes,i=1;
    printf("digite o numero para ser multiplicado\n");
    scanf("%d",&num);
    printf("digite o tamanho da tabuada\n");
    scanf("%d",&vezes);
    while (i<=vezes)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
    printf("fim da tabuada"); 
}