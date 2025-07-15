#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero; // variável para armazenar o número escolhido pelo usuário
    printf("Escolha um número inteiro entre 1 e 10:\n"); // solicita ao usuário que escolha um número
    scanf("%d", &numero); // lê o número escolhido pelo usuário
    printf("Aqui está a tabuada do número %d:\n", numero); // exibe o número escolhido

    for (int i = 1; i <= 10; i++) // loop para multiplicar o número escolhido
    {
        printf("%d x %d = %d\n", numero, i, numero * i); // exibe o resultado da multiplicação
    }
    printf("Fim da tabuada!"); // mensagem de fim da tabuada
    return 0; // retorna 0 para indicar que o programa terminou corretamente
}