#include <stdio.h>
#include <stdlib.h> // Biblioteca para usar a função abs() se necessário
#include <time.h> // Biblioteca para usar a função time() se necessário
// #define NUMERO_TENTATIVAS 5 // Define o número de tentativas permitidas 

int main() {
    // Imprime o cabeçalho do jogo
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = rand() % 100; // Variável que armazena o número secreto
    int chute; // Variável que armazena o chute do usuário
    int tentativas = 1;
    // int numeroTentativas = 3; // Variável que define o número de tentativas permitidas
    double pontos = 1000; // Variável que armazena os pontos do usuário 
    int acertou = 0; // Variável que indica se o usuário acertou o número secreto

    int nível; // Variável que armazena o nível de dificuldade escolhido pelo usuário
    printf("Escolha o nível de dificuldade que você quer:\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n"); // Imprime as opções de nível de dificuldade
    printf("Nível: ");
    scanf("%d", &nível); // Lê o nível de dificuldade escolhido pelo usuário

    int numerodetentativas; // Variável que define o número de tentativas permitidas
    // Ou uso de Switch case ao invés de if else que também é bastante usado 
    if (nível == 1) { // Se o usuário escolher o nível fácil
        numerodetentativas = 15; // Define o número de tentativas como 20
    } else if (nível == 2) { // Se o usuário escolher o nível médio
        numerodetentativas = 10; // Define o número de tentativas como 10
    } else { // Se o usuário escolher o nível difícil
        numerodetentativas = 5; // Define o número de tentativas como 5
    }
    printf("Você escolheu o nível %d e terá %d tentativas.\n", nível, numerodetentativas); // Imprime o nível de dificuldade escolhido e o número de tentativas permitidas
    //loop 
    // for(int i = 1; i <= NUMERO_TENTATIVAS; i++) // Loop que permite ao usuário fazer 3 tentativas de um em um 

    // while (ganhou == 0) 
    for (int i = 1; i <= numerodetentativas; i++) { // Loop que permite ao usuário fazer 5 tentativas de um em um
        // printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS); // Imprime o número da tentativa atual
        printf("Tentativa %d\n", i); // Imprime o número da tentativa atual
        printf("Qual é o seu chute?\n"); // Solicita o chute do usuário
        
        scanf("%d", &chute); // Lê o chute do usuário
        printf("Seu chute foi: %d\n", chute); // Imprime o chute do usuário

        if (chute < 0) {
            printf("Você não pode chutar um número negativo!\n"); // Mensagem de erro se o chute for negativo
            // i--; // Decrementa o contador de tentativas para não contar essa tentativa inválida
            continue; // Pula para a próxima iteração do loop
        }

        acertou = (chute == numerosecreto); // Verifica se o chute é igual ao número secreto
        int maior = (chute > numerosecreto); // Verifica se o chute é maior que o número secreto
        // int menor =(chute < numerosecreto); // Verifica se o chute é menor que o número secreto
        
        // se o chute for igual ao numero secreto
        //if (chute == numerosecreto)
        if (acertou) {
            // printf("Parabéns! Você acertou!\n");  Mensagem de sucesso
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

        tentativas++;

        double pontosperdidos = (chute - numerosecreto) / 2.0; // Calcula os pontos perdidos com base na diferença entre o chute e o número secreto
        if (pontosperdidos < 0){
            pontosperdidos = pontosperdidos * -1; // Se a diferença for negativa, torna-a positiva
        }
        //ou usar o abs com uso do #include <stdlib.h> diminuindo o código 
        pontos -= pontosperdidos; // Subtrai os pontos perdidos dos pontos totais do usuário
        // tentativas = tentativas + 1; // Incrementa o número de tentativas
        // printf("Você errou! Tente novamente.\n");
    }
    printf("Fim do jogo!\n"); // imprime a mensagem de fim do jogo quando o usuário acerta ou esgotam as tentativas
    if(acertou) {
        printf("Parabéns! Você acertou o número secreto!\n"); // Mensagem de sucesso se o usuário acertar
        printf("Você acertou o número secreto em %d tentativas!\n", tentativas - 1); // Imprime o número de tentativas que o usuário levou para acertar
    printf("Total de pontos: %.1f\n", pontos); // Imprime a pontuação final do usuário 
    } else {
        printf("Você não acertou o número secreto. O número era %d.\n", numerosecreto); // Mensagem de erro se o usuário não acertar
    }

}


