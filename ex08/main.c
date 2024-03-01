#include <stdio.h>

int Potencia(int base, int expoente)
{
    int i, total = 1;
    if (expoente == 0)
    {
        return 1;
    }
    for (i = 0; i < expoente; i++)
    {
        total *= base;
    }
    return total;
}

int main()
{
    int base, expoente, resultado;
    printf("Digite um numero: ");
    scanf("%d", &base);
    printf("Digite um expoente: ");
    scanf("%d", &expoente);

    resultado = Potencia(base, expoente);
    
    printf("A potencia do numero digitado eh: %d", resultado);


}