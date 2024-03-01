#include <stdio.h>

int CalcularMedia(int num1, int num2, int num3){
    int media = (num1 + num2 + num3)/3;
    return media;
}

int main(){
    int i, num[3];


    printf("Digite as notas:\n");
    for (i = 0; i < 3; i++)
    {
        printf("nota %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int media = CalcularMedia(num[0], num[1], num[2]);
    printf("A media das notas foram: %d", media);

    return 0;
}