#include <stdio.h>
#define NUMERO_TENTATIVAS 3 // Define o número de tentativas permitidas 

int main() {
    // Imprime o cabeçalho do jogo
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42; // Variável que armazena o número secreto
    int chute; // Variável que armazena o chute do usuário
    // int numeroTentativas = 3; // Variável que define o número de tentativas permitidas

    //loop 
    for(int i = 1; i <= NUMERO_TENTATIVAS; i++) // Loop que permite ao usuário fazer 3 tentativas de um em um 
    {
        printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS); // Imprime o número da tentativa atual
        printf("Qual é o seu chute?\n"); // Solicita o chute do usuário
        
        scanf("%d", &chute); // Lê o chute do usuário
        printf("Seu chute foi: %d\n", chute); // Imprime o chute do usuário

        if (chute < 0) {
            printf("Você não pode chutar um número negativo!\n"); // Mensagem de erro se o chute for negativo
            i--; // Decrementa o contador de tentativas para não contar essa tentativa inválida
            continue; // Pula para a próxima iteração do loop
        }

        int acertou = (chute == numerosecreto); // Verifica se o chute é igual ao número secreto
        int maior = (chute > numerosecreto); // Verifica se o chute é maior que o número secreto
        int menor =(chute < numerosecreto); // Verifica se o chute é menor que o número secreto
        
        // se o chute for igual ao numero secreto
        //if (chute == numerosecreto)
        if (acertou) {
            printf("Parabéns! Você acertou!\n"); // Mensagem de sucesso
            break; // Sai do loop se o usuário acertar
        }
        // caso contrário
        // else {}

        //if (chute > numerosecreto) 
        else if (maior) {
            printf("Seu chute foi maior que o número secreto.\n");
        }
        else { // caso contrário if (chute < numerosecreto) 
            printf("Seu chute foi menor que o número secreto.\n");
        }
        // printf("Você errou! Tente novamente.\n");
    }
    printf("Fim do jogo!\n"); // imprime a mensagem de fim do jogo quando o usuário acerta ou esgotam as tentativas
}


