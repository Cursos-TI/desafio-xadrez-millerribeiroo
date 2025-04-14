#include <stdio.h>

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

void movimentotorre(int casas){
    if (casas > 0)
    {
    printf("Direita \n");
    movimentotorre(casas - 1);
    }
}

void movimentobispo(int casas){
    int v, h;
    if (casas > 0){
    for (v = 1; v < 1; v++);
    {
        for (h = 1; h < 0; h++);
        {
            printf("Direita. \n");
        }
    
    printf("Cima. \n");
    
    }
    
    movimentobispo(casas - 1);
    }
}

void movimentorainha(int casas){
    if (casas > 0)
    {
    printf("Esquerda. \n");
    movimentorainha(casas - 1);
    }
}


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movbispo, movtorre, movrainha, movcavalo;
    int i, b, t, r = 0;
    int opcao;

    //Menu inicial do programa:
    printf("Bem vindo ao guia de movimentos de xadrez. \n\n");
    printf("\n1 - Bispo;\n");
    printf("2 - Torre;\n");
    printf("3 - Rainha;\n");
    printf("4 - Cavalo;\n\n");

    printf("Escolhe qual peça deseja saber mais sobre: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: //Movimentação do Bispo:
        if (opcao == 1)
        {
            printf("\nOs Bispos movem-se apenas em diagonais e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 5): ");
            scanf("%d", &movbispo);

            if (movbispo <= 5)
            {
               movimentobispo(movbispo);
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;
    
    case 2: //Movimentação da Torre:
        if (opcao == 2)
        {
            printf("\nAs Torres movem-se apenas na horizontal ou vertical e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 5): ");
            scanf("%d", &movtorre);

            if (movtorre <= 5)
            {
                movimentotorre(movtorre);
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;
        
    case 3: //Movimentação da Rainha:
        if (opcao == 3)
        {
            printf("\nAs Rainhas movem-se nas três direções e não passam por cima de nenhuma outra peça.");
            printf("\nSelecione quantas casas deseja andar (no max. 8): ");
            scanf("%d", &movrainha);

            if (movrainha <= 8)
            {
                movimentorainha(movrainha);
            }
            
            printf("\nNúmero de casas excede o máximo.");
        }
        
    break;       

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    case 4:
        if (opcao == 4)
        {
            
            printf("\nOs Cavalos movem-se em 'L' e PODEM passar por cima de outra peça.\n");
            printf("O movimento consiste em 2 movimentos em uma direção e dobrando mais 1 movimento para o movimento lateral, formando um L.\n");
            printf("Por exemplo:\n\n");

            for (i = 1; i <= 1; i++)
                {
                    for ( movcavalo = 1; movcavalo <= 2; movcavalo++)
                    {
                        printf("Cima;");
                    }
                    
                    printf("Direita;");
                }
        }  
    
    break;
    
    default:
        printf("Opção inválida.");
    break;

    }
    

    

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
