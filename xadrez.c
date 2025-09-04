#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// declaração de funções recursivas para cada peça

int moverBispo(int casas)
{
    if (casas > 0)
    {
        for (int i = 1; i <= 1; i++)
        {
            printf("Cima\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
int moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8, cavalo = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // movendo bisco 5 vezes com o while
    printf("Bispo\n");

    moverBispo(bispo);

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // movendo torre 5 vezes

    printf("Torre\n");
    moverTorre(torre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha\n");
    moverRainha(rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // cavalo

    printf("Cavalo\n");

    for (int i = 0; i < 3; i++) // vertical
    {
        for (int j = 0; j < 1; j++) // horizontal
        {
            if (i < 2)
                printf("Cima\n");
            else
                printf("Direita\n");
        }
    }
    printf(".\n");

    // imprimindo tudo numa linha só conforme pedido:  O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"),
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
