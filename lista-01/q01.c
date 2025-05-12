/* 
    1) Representar os passos abaixo:
        1.1 Criar 3 variáveis (espaços de memória) de nome M1, M2 e M3, para armazenar valores inteiros;
        1.2 Armazenar a constante 10 na posição de memória M3;
        1.3 Ler um valor inteiro colocando-o na posição de memória M1;
        1.4 Armazenar na posição de memória M2 o conteúdo da posição de memória M1 mais 8 unidades;
        1.5 Apresentar o conteúdo das posições de memória M1, M2 e M3, identificando-os;
        1.6 Adicionar o conteúdo das posições de memória M1 e M2 a posição de memória M3;
        1.7 Armazenar na posição de memória M3 o triplo de sua metade;
        1.8 Adicionar uma unidade a posição de memória M3;
        1.9 Apresentar o conteúdo da posição de memória M3, identificando-o;
*/

#include <stdio.h>

int main() {
    int M1, M2, M3;

    M3 = 10;

    printf("Digite um número para M1: ");
    scanf("%d", &M1);

    M2 = M1 + 8;

    printf("M1: %d\n", M1);
    printf("M2: %d\n", M2);
    printf("M3: %d\n", M3);

    M3 += M1 + M2;
    M3 = M3/2 * 3;
    M3++;

    printf("M3: %d\n", M3);
}
