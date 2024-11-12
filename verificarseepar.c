#include <stdio.h>
int main(){
    int numero,resultado;

    printf("Digite um número: \n");
    scanf("%d",&numero);

    resultado = numero % 2;
    printf("O resultado é: %d\n",resultado);
    

    if (resultado != 0)
    {
        printf("o numero %d é impar.\n",numero);
    }
    else
    {
        printf("O número %d é par.\n",numero);
    }
        return 0;
}