#include <stdio.h>
#include <stdlib.h>
int main(){

    int TypeA, TypeB, AUX;


    printf("Informe o valor de A: \n");
    scanf("%d",&TypeA);

    printf("Informe o valor de B: \n");
    scanf("%d",&TypeB);

    AUX = TypeA;
    TypeA = TypeB;
    TypeB = AUX;

    printf("Agora A tem %d.\n",TypeA);
    printf("Agora B tem %d.\n",TypeB);


}