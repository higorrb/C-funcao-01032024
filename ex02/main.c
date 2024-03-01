#include <stdio.h>

void CalcularTri(int a, int b, int c){
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Os numeros digitados formam um triangulo.");
    }
    else{
        printf("Os numeros digitados NAO formam um triangulo");
    }
}

int main(){
    int num[3], i;
    

    printf("Digite os lados de um triangulo:\n");
    for (i = 0; i < 3; i++)
    {
        printf("lado %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    CalcularTri(num[0],num[1],num[2]);

    return 0;
}