#include <stdio.h>

void MultCinco(int num1){
    if (num1 % 5 == 0)
    {
        printf("O Numero digitado eh multiplo de 5");
    }
    else
    {
        printf("O Numero digitado NAO eh multiplo de 5");
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    MultCinco(numero);

    return 0;
}