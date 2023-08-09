#include <stdio.h>
int main (){
    
    int A, B, soma, subt, mult, divis;
    printf("Enter the first number:.\n");
    scanf("%d",&A);

    printf("Enter the second number:.\n");
    scanf("%d", &B);
    

    soma = A + B;
    subt = A - B;
    mult = A * B;
    divis = A - B;


    printf("The sum gives: %d.\n", soma);
    printf("The subtraction: %d.\n", subt);
    printf("The multiplication: %d.\n", mult);
    printf("The division: %d.\n", divis);

}
