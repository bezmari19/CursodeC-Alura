#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int n1 = rand(); // Gera um número aleatório
    int n2 = rand(); // Gera outro número aleatório

    printf("Número 1: %d\n", n1); // Imprime o primeiro número aleatório
    printf("Número 2: %d\n", n2); // Imprime o segundo
}

/////////////////////////////////////////////////////////////////////////////

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int numerosecreto = rand() % 1 + 50; // Gera um número aleatório entre 1 e 50
    
    printf("Numero secreto: %d\n", numerosecreto); // Imprime o número secreto para teste
    return 0;
}

