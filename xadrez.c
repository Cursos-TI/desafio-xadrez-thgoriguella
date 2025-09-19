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

    
    //REGISTRO DAS VARIAVEIS
    
    int TORRE = 5;
    int BISPO = 5;
    int RAINHA = 8;

    int option;
   
    do {
        printf("**MENU PEÇAS DE XADREZ**\n");//MENU PARA O USUÁRIO ESCOLHER A PEÇA QUE QUISER
        printf("ESCOLHA UMA PEÇA PARA QUE SEJA DEMONSTRADO OS SEUS MOVIMENTOS!\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. RAINHA\n");
        printf("4. SAIR!\n");
        printf("ESCOLHA UMA OPÇÃO: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("*---MOVIMENTOS DA PEÇA TORRE---*\n");//LOGICA PARA A TORRE
                int i = 1;
                while (i <= TORRE)
                {
                   printf("DIREITA!\n");
                   i++;
                }
                printf("\n");
                break;
            case 2:
                printf("*---MOVIMENTOS DA PEÇA BISPO---*\n");//LOGICA PARA O BISPO
                int p = 1;
                while (p <= BISPO)
                {
                   printf("CIMA, DIREITA!\n");
                   p++;
                }
                printf("\n");
                break;
            case 3:
                printf("*---MOVIMENTOS DA PEÇA RAINHA---*\n");//LOGICA PARA A RAINHA
                int r = 1;
                while (r <= RAINHA)
                {
                   printf("ESQUERDA!\n");
                   r++;
                }
                printf("\n");
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 4);
   
    return 0;
}
