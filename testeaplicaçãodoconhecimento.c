#include <stdio.h>
 int main(){
    float temperatura, umidade;
     unsigned int estoque,estoquemin;
    
    printf("Digite agora o valor do estoque:\n");
    scanf("%u",&estoque);

    printf("Digite agora a temperatura do estoque:\n");
    scanf("%f",&temperatura);

    printf("Digite agora o valor da uidade do ar:\n");
    scanf("%f",&umidade);
    
    estoquemin = 5000;
    
    if (estoque <= estoquemin)
    {
        printf("O nivel do estoque está crítico.\n");
    }
    else
    {
        printf("o nivel do estoque está adequado.\n");
    }
    
    if (temperatura >= 30.0 )
    {
        printf("A temperatura está muito alta.\n");
    }
    else
    {
        printf("A temperatura adequada.\n");
    }
    
    if (umidade >= 10)
    {
        printf("A umidade está muito alta.\n");
    }
    else
    {
        printf("A umidade está adequada.\n");
    }
    
    
    return 0;
 }