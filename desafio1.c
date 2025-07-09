#include <stdio.h>

int main() {

    int x; int y; // Declaração das variáveis x e y
    printf("Digite o valor de x abaixo:\n"); // Solicita o valor de x
    scanf("%d", &x); // Lê o valor de x
    printf("Digite o valor de y abaixo:\n"); // Solicita o valor de y
    scanf("%d", &y); // Lê o valor de y

    int multiplicacao = x * y; // Calcula a multiplicação de x e y
    // Exibe o resultado da multiplicação
    printf("A multiplicação entre x = %d e y = %d é igual a %d\n", x, y, multiplicacao);

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}