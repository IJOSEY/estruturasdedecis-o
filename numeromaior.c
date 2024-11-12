#include <stdio.h>
int main(){
    
    int numero, numero1;

    printf("Digite um número:\n");
    scanf("%d",&numero);

    printf("Digite outro número:\n");
    scanf("%d",&numero1);
    if(numero > numero1 ){
        printf("O primeiro número: %d, é maior que o segundo número: %d\n", numero,numero1);
    }
    else{
         printf("O primeiro número: %d, é menor que o segundo número: %d\n", numero,numero1);
    }
    return 0;
}