#include <stdio.h>

void Adi(int a, int b)
{
    int soma = a + b;
    printf("%d + %d = %d", a, b, soma);
}

void Sub(int a, int b)
{
    int subtrai = a - b;
    printf("%d - %d = %d", a, b, subtrai);
}

void Mult(int a, int b)
{
    float multiplicar = a * b;
    printf("%d * %d = %.2f", a, b, multiplicar);
}
void Div(int a, int b){
    if ( b == 0)
    {
        printf("O segundo numero digitado foi ZERO, resultado invalido.");
    }
    else
    {
        float dividir = a / b;
        printf("%d / %d = %.2f", a, b, dividir);
    }
}

int main(){
    int op = 1;
    int num1 , num2;

    printf("Digite o 1 numero:");
    scanf("%d", &num1);
    printf("Digite o 2 numero: ");
    scanf("%d", &num2);

    while (op != 0)
    {
        printf("\nDigite qual operacao deseja realizar:\n[1]ADICAO\n[2]SUBTRACAO\n[3]MULTIPLICACAO\n[4]DIVISAO\n[0]FINALIZAR\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            Adi(num1, num2);
            break;
        case 2:
            Sub(num1, num2);
            break;
        case 3:
            Mult(num1, num2);
            break;
        case 4:
            Div(num1, num2);
            break;
        }
    }
    printf("Programa Finalizado");
    

    return 0;
}