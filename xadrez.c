#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int b = 0;
    int movbispo;
    int t = 0;
    int movtorre;
    int r = 0;
    int movrainha;
    int opcao;

    printf("Bem vindo ao guia de movimentos de xadrez. \n\n");
 
    printf("\n1 - Bispo;\n");
    printf("2 - Torre;\n");
    printf("3 - Rainha;\n\n");

    printf("Escolhe qual peça deseja saber mais sobre: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (opcao == 1)
        {
            printf("\nOs Bispos movem-se apenas em diagonais e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 5): ");
            scanf("%d", &movbispo);

            if (movbispo <= 5)
            {
                for (int b = 1; b <= movbispo; b++)
                {
                    printf("Cima, Direita.\n");
                }
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;
    
    case 2:
        if (opcao == 2)
        {
            printf("\nAs Torres movem-se apenas na horizontal ou vertical e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 5): ");
            scanf("%d", &movtorre);

            if (movtorre <= 5)
            {
                for (int t = 1; t <= movtorre; t++)
                {
                    printf("Direita.\n");
                }
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;
        
    case 3:
        if (opcao == 3)
        {
            printf("\nAs Rainhas movem-se nas três direções e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 8): ");
            scanf("%d", &movrainha);

            if (movrainha <= 8)
            {
                for (int r = 1; r <= movrainha; r++)
                {
                    printf("Esquerda.\n");
                }
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;       

    default:
        printf("Opção inválida.");
    break;

    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
