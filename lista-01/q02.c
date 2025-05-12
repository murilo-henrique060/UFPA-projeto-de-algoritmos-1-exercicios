/*
    2) Ler dois valores inteiros e apresentar sua: SOMA=xx, DIFERENÇA=xx, PRODUTO=xx, e MÉDIA=xx
*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("SOMA=%d, DIFERENÇA=%d, PRODUTO=%d e MÉDIA=%d", n1 + n2, n1 - n2, n1 * n2, (n1 + n2)/2);
}