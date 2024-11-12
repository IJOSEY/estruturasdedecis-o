#include <stdio.h>
int main(){
    int numero,resultado;

    printf("Digite um número: \n");
    scanf("%d",&numero);

    resultado = numero % 2;
    printf("O resultado é: %d\n",resultado);
    

    if (resultado != 0)
    {
        printf("o numero é impar.\n");
    }
    else
    {
        printf("O número é par.\n");
    }
        return 0;
}