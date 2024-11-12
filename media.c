#include <stdio.h>
 int main (){

    int nota1, nota2;
    int media, nota3;

    printf("Digite a sua primeira nota:\n");
    scanf("%d",&nota1);

    printf("Digite a sua segunda nota:\n");
    scanf("%d",&nota2);

    printf("Digite a sua terceira nota:\n");
    scanf("%d",&nota3);

    media = (nota1+  nota2 + nota3) / 3;

    if(media >= 60.0){
        printf("Você passou!! A sua média é %d\n",media);
    }else{
        printf("Você nao passou!! Asua média é %d\n",media);
    }



    return 0;
 }