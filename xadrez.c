#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0, torre = 0, rainha, cavalo = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // movendo bisco 5 vezes com o while
    printf("Bispo\n");
    while (bispo <= 4)
    {

        printf("Cima, Direita\n");
        bispo++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // movendo torre 5 vezes

    printf("Torre\n");
    do
    {

        printf("Direita\n");
        torre++;

    } while (torre <= 4);
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha\n");
    for (rainha = 0; rainha <= 7; rainha++)
    {
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // cavalo

    printf("Cavalo");
    while (cavalo < 1)
    {
        printf("\n"); // separe os movimento do cavalo dos movimentos anteriores

        for (int i = 0; i < 2; i++)
        {
            printf("Baixo, "); // imprime 2 vezes
        }
        printf("Esquerda\n"); // imprime 1 vez
        // imprimindo tudo numa linha só conforme pedido:  O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"),
        printf("\n");
        cavalo++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
