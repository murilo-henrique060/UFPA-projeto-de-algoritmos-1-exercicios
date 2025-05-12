/*
    3) Ler as notas obtidas por 5 alunos, calcular a média entre as notas lidas e apresentá-la. 
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    printf("Digite a quinta nota: ");
    scanf("%f", &n5);

    printf("A média das notas é %.2f\n", (n1 + n2 + n3 + n4 + n5) / 5);
}