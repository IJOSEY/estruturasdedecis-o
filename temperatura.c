#include <stdio.h>
 int main(){

    float temperatura;

    printf("Digite a temperatura atual?\n");
    scanf("%f",&temperatura);

    if(temperatura>= 30.0){
        printf("Está calor.\n");
    }
    else{
        printf("Está frio.\n");
    }


    return 0;
 }