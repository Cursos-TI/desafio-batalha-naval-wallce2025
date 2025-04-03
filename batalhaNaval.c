#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
