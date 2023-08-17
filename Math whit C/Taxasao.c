#include <stdio.h>
#include <stdlib.h>
int main (){
    

    float valor, taxa, tempo, prestacao;
    printf("Enter the value:.\n");
    scanf("%f",&valor);

    printf("Enter the tax:.\n");
    scanf("%f", &taxa);

    printf("Enter the time of:.\n");
    scanf("%f", &tempo);
    


    prestacao = valor + (valor * (taxa/100)* tempo);
 

    printf("The value of installment: %.21af.\n", prestacao);
   

}
