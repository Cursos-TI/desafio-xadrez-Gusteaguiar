#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.+


    //Nível novato:
    int opcao;
    do{
        printf("Jogo de Xadrez:\n");
        printf("1. Torre\n");
        printf("2. Rainha\n");
        printf("3. Bispo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
    
        switch(opcao) {
        case 1:
        //Movimento da Torre 5 casas para frente
        for(int i=0; i<5; i++){
            printf("Frente \n"); //Imprime a direção do movimento
            }
        break;

        case 2:
     //Movimento da Rainha 5 casas para a Esquerda  
        int j=1;
        while (j<=5){
            printf("Esquerda \n"); //Imprime a direção do movimento
            j++;
        }
        break;

        case 3:
        //Movimento do Bispo 5 casas na diagonal
        int k=1;
        do {
         printf("Cima-Direita \n"); //Imprime a direção do movimento (Diagonal)
         k++;
        } while (k <= 5);
        break;

        case 4:
            printf("Saindo...\n");
            break;

        }
    }while (opcao != 4);

return 0;

}
