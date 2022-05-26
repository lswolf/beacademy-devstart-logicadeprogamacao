//multiplos de 3 entre 2 numeros digitados 
#include <stdio.h>
void main(){
    int num, num2, i;
    printf("digite o menor numero\n");
    scanf("%d",&num);
    printf("digite o maior numero\n");
    scanf("%d",&num2);
    for( i=num;i<=num2;i++){
        if(i%3==0){
            printf("%d,  ",i);
        }
    }
    printf("fim dos multiplos de 3"); 
}