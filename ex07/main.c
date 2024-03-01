#include <stdio.h>

void ParOUImpar(int numero){
    if (numero % 2 == 0)
    {
        printf("O numero digitado eh PAR");
    }
    else
    {
        printf("O numero digitado eh IMPAR");
    }
}

int main(){
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);
    ParOUImpar(num);

    return 0;
}