#include <stdio.h>

int Somando(int vetor[], int tamanho){
    int i, soma = 0;

    for (i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

int main(){
    int soma;
    int tamanho = 5;
    int numeros[] = {4, 2, 8, 4, 6};
    soma = Somando(numeros, tamanho);
    printf("%d", soma);
    return 0;
}