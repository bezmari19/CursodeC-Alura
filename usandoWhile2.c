#include <stdio.h>

int main() {

    int i = 0; // inicializa o contador com 0
    while (i < 100) {
        i++; // incrementa o contador
        printf("%d + 1 = %d\n", i - 1, i); // imprime o valor atual do contador
        if (i >= 100) { // verifica se o contador atingiu 100
            break; // se sim, sai do loop
        }
    }
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}