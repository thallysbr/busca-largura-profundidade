#include "funcoes.c"
#include <stdio.h>
#include <stdlib.h>

int buscaEmLargura(VERTICE *inicio, VERTICE *destino, int MAX_VERTICES){
    int iniFila = 0;
    int tamFila = 1;
    int distancia = 0;

    VERTICE *FILA[MAX_VERTICES];
    int visitado[MAX_VERTICES] = {0}; // Este array será utilizado de maneira diferente se necessário

    for (int i = 0; i < MAX_VERTICES; i++){
        FILA[i] = NULL;
    }

    FILA[iniFila] = inicio;

    while (iniFila < tamFila){
        VERTICE *atual = FILA[iniFila];
        if (atual == destino) return distancia;

        // Percorrer vizinhos e marcar como visitados, se possível
        for (int i = 0; i < atual->nroVizinhos; i++){
            VERTICE *vizinho = atual->vizinhos[i];
            // faz o print do vertice visitado
            printf("Visitando vertice %d\n", vizinho);
            // Verificar e marcar como visitado
            FILA[tamFila] = vizinho;
            tamFila++;
        }
        iniFila++;
        distancia++;
    }
    return -1; // Destino não encontrado
}


// função principal
int main() {
    // número de vértices no grafo
    int vertices = 14;

    // cria o grafo
    GRAFO *grafo = criaGrafo(vertices + 1);

    // adiciona as arestas e peso
    criaAresta(grafo, 0, 1, 1);
    criaAresta(grafo, 0, 2, 1);
    criaAresta(grafo, 1, 3, 1);
    criaAresta(grafo, 1, 4, 1);
    criaAresta(grafo, 1, 5, 1);
    criaAresta(grafo, 3, 6, 1);
    criaAresta(grafo, 3, 7, 1);
    criaAresta(grafo, 5, 8, 1);
    criaAresta(grafo, 5, 9, 1);
    criaAresta(grafo, 7, 10, 1);
    criaAresta(grafo, 7, 11, 1);
    criaAresta(grafo, 7, 12, 1);
    criaAresta(grafo, 9, 13, 1);
    criaAresta(grafo, 9, 14, 1);

    // imprime a lista com método já criado
    printf("Lista de Adjacencia \n");
    // faz print do retorno de buscaEmLargura(grafo->adj, grafo->adj + 14, vertices + 1);
    int retorno = buscaEmLargura(grafo->adj, grafo->adj + 14, vertices + 1);
    // faz print de retorno
    printf("Distancia: %d\n", retorno);
    imprime(grafo);

    printf("Aperte um botao para sair");
    system("pause");

    return 0;
}