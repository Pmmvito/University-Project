#include <stdio.h>
#include <stdlib.h>

int main(){

    float valorGast;
    printf("informe o valor gasto .\n");
    scanf("%f",&valorGast);

    printf("O Valor com a taxa eh: %.2f", valorGast*1.10);

}