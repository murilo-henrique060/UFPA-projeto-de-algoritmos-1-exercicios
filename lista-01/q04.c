/*
    4) Ler quatro valores reais e apresentar a média ponderada, considerando os pesos 1, 2, 3 e 4, respectivamente.
*/

#include <stdio.h>

int main() {
    float v1, v2, v3, v4;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &v3);

    printf("Digite o quarto valor: ");
    scanf("%f", &v4);

    float media = (
        v1 +
        v2 * 2 +
        v3 * 3 +
        v4 + 4
    ) / 10;

    printf("A média ponderada é %.2f\n", media);
}