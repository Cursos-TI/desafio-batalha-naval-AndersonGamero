/**
 * @file xadrez.c
 * @brief Desafio Completo (Nível Novato): Movimentando Peças e Posicionando Navios.
 *
 * Este programa combina dois desafios:
 * 1. Simulação do movimento de três peças de xadrez (Torre, Bispo e Rainha).
 * 2. Posicionamento de navios em um tabuleiro 10x10 de Batalha Naval usando matrizes.
 *
 * O objetivo é demonstrar a aplicação das estruturas de repetição (for, while, do-while)
 * e o uso de arrays unidimensionais (vetores) e bidimensionais (matrizes) em C.
 */

#include <stdio.h>

// Definições de constantes para o Tabuleiro de Batalha Naval
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// -------------------------------------------------------------------------
// PROTÓTIPOS DE FUNÇÕES (Opcional, mas boa prática para organização)
// -------------------------------------------------------------------------
void simular_xadrez();
void posicionar_navios();
void imprimir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);


int main() {
    
    // =========================================================================
    // PARTE 1: DESAFIO DE XADREZ (MOVIMENTAÇÃO DE PEÇAS)
    // Demonstra o uso de 'for', 'while' e 'do-while'.
    // =========================================================================
    simular_xadrez();
    
    // Separador visual entre os desafios
    printf("\n\n#################################################\n");
    printf("   INÍCIO DO DESAFIO: POSICIONANDO NAVIOS\n");
    printf("#################################################\n\n");
    
    // =========================================================================
    // PARTE 2: DESAFIO DE BATALHA NAVAL (POSICIONAMENTO DE NAVIOS)
    // Demonstra o uso de matrizes (arrays bidimensionais).
    // =========================================================================
    posicionar_navios();
    
    return 0;
}

// =========================================================================
// IMPLEMENTAÇÃO DA FUNÇÃO DE SIMULAÇÃO DE XADREZ
// =========================================================================
void simular_xadrez() {
    // -------------------------------------------------------------------------
    // 1. Simulação do Movimento da TORRE (usando 'for')
    // Movimento: 5 casas para a direita
    // -------------------------------------------------------------------------
    int casas_torre = 5; 
    
    printf("======================================\n");
    printf("      SIMULAÇÃO DO MOVIMENTO DA TORRE\n");
    printf("======================================\n");
    printf("Movendo %d casas para a Direita:\n", casas_torre);
    
    // Loop 'for': Ideal quando se sabe o número exato de iterações.
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n"); 
    
    // -------------------------------------------------------------------------
    // 2. Simulação do Movimento do BISPO (usando 'while')
    // Movimento: 5 casas na diagonal para cima e à direita
    // -------------------------------------------------------------------------
    int casas_bispo = 5;
    int contador_bispo = 0; 
    
    printf("======================================\n");
    printf("     SIMULAÇÃO DO MOVIMENTO DO BISPO\n");
    printf("======================================\n");
    printf("Movendo %d casas na diagonal (Cima e Direita):\n", casas_bispo);
    
    // Loop 'while': Continua enquanto a condição for verdadeira.
    while (contador_bispo < casas_bispo) {
        contador_bispo++; 
        printf("Casa %d: Cima, Direita\n", contador_bispo);
    }
    
    printf("\n"); 
    
    // -------------------------------------------------------------------------
    // 3. Simulação do Movimento da RAINHA (usando 'do-while')
    // Movimento: 8 casas para a esquerda
    // -------------------------------------------------------------------------
    int casas_rainha = 8; 
    int contador_rainha = 0; 
    
    printf("======================================\n");
    printf("    SIMULAÇÃO DO MOVIMENTO DA RAINHA\n");
    printf("======================================\n");
    printf("Movendo %d casas para a Esquerda:\n", casas_rainha);
    
    // Loop 'do-while': Garante que o corpo do loop execute pelo menos uma vez.
    if (casas_rainha > 0) {
        do {
            contador_rainha++;
            printf("Casa %d: Esquerda\n", contador_rainha);
        } while (contador_rainha < casas_rainha);
    } else {
        printf("Nenhum movimento realizado.\n");
    }
}

// =========================================================================
// IMPLEMENTAÇÃO DA FUNÇÃO DE BATALHA NAVAL
// =========================================================================

/**
 * @brief Inicializa o tabuleiro 10x10 e posiciona dois navios (3 posições cada).
 */
void posicionar_navios() {
    
    // 1. Representação e Inicialização do Tabuleiro
    // Matriz 10x10 inicializada com 0 (água) em todas as posições.
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Vetores unidimensionais para representar o navio (apenas para a dica do enunciado,
    // embora o posicionamento direto na matriz seja mais comum).
    // O valor '3' representa a parte do navio.
    int navio_modelo[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO}; 
    
    // 2. Definição das Coordenadas Iniciais dos Navios
    // Coordenadas são (linha, coluna) e usam indexação de 0 a 9.
    
    // Navio Horizontal: Inicia em (Linha 2, Coluna 1) e se estende pelas colunas 1, 2, 3.
    int linha_h = 2; 
    int coluna_h = 2;
}