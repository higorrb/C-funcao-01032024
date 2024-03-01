#include <stdio.h>

int fatorar(int numero){
    int fatorial = 1, i;
    for ( i = 2; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
    
}

int main()
{
    int num, fatorial;
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &num);
    fatorial = fatorar(num);
    printf("O fatorial do numero digitado foi: %d", fatorial);
    return 0;
}
