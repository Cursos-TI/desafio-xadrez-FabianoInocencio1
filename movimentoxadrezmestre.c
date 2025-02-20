#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que simula o movimento do bispo no tabuleiro
void movimento_bispo(int casa) {
    // Se a casa for 0, retorna (condição de parada da recursão)
    if (casa == 0) return;
    
    // Chama recursivamente a função para simular o movimento
    movimento_bispo(casa - 1);
    
    // Exibe as direções do movimento do bispo
    printf("Diagonal Direita\n");
    printf("Para cima\n");
}

// Função que simula o movimento da torre no tabuleiro
void movimento_torre(int casa2) {
    // Se a casa for 0, retorna (condição de parada da recursão)
    if (casa2 == 0) return;
    
    // Chama recursivamente a função para simular o movimento
    movimento_torre(casa2 - 1);
    
    // Exibe a direção do movimento da torre
    printf("Para Direita\n");
}

// Função que simula o movimento da rainha no tabuleiro
void movimento_rainha(int casa3) {
    // Se a casa for 0, retorna (condição de parada da recursão)
    if (casa3 == 0) return;
    
    // Chama recursivamente a função para simular o movimento
    movimento_rainha(casa3 - 1);
    
    // Exibe a direção do movimento da rainha
    printf("Para Esquerda\n");
}

int main() {
    // Inicializa a variável Bispo com valor 5
    int Bispo = 5;
    printf("Movimento do bispo:\n");
    printf("\n");
    
    // Chama a função movimento_bispo para simular o movimento
    movimento_bispo(Bispo);
  
    printf("\n");
    
    // Inicializa a variável Torre com valor 5
    int Torre = 5;
    printf("Movimento da torre:\n");
    printf("\n");
    
    // Chama a função movimento_torre para simular o movimento
    movimento_torre(Torre);
   
    printf("\n");
    
    // Inicializa a variável Rainha com valor 8
    int Rainha = 8;
    printf("Movimento da Rainha:\n");
    printf("\n");
    
    // Chama a função movimento_rainha para simular o movimento
    movimento_rainha(Rainha);
   
    printf("\n");
    
    // Exibe o movimento do cavalo (não tem recursão, apenas imprime uma vez)
    printf("Movimento do Cavalo\n");
    
    // Loop para simular o movimento do cavalo (apenas uma vez)
    for (int i = 1; i <= 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    
    return 0;
}