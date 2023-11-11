"# busca-largura-profundidade"

Nome: Thallys Silva dos Santos Correia RA: 2144360

## Rastreamento da busca em largura a partir do vértice 1 no grafo definido pelas arestas: 0-1, 0-2, 1-3, 1-4, 1-5, 3-6, 3-7, 5-8, 5-9, 7-10, 7-11, 7-12, 9-13, 9-14.

Inicia no vértice 1:
iniFila = 0, tamFila = 1.

Vértice 1 visita seus vizinhos:
Visita o vértice 0.
Visita o vértice 3.
Visita o vértice 4.
Visita o vértice 5.
Fila: 0, 3, 4, 5.
iniFila = 0, tamFila = 5.

Vértice 0 visita seus vizinhos:
Visita o vértice 2.
Fila:: 3, 4, 5, 2.
iniFila = 1, tamFila = 6.

Vértice 3 visita seus vizinhos:
Visita o vértice 6.
Visita o vértice 7.
Fila:: 4, 5, 2, 6, 7.
iniFila = 2, tamFila = 8.

Vértice 4 não tem vizinhos não visitados:
iniFila = 3, tamFila = 8.

Vértice 5 visita seus vizinhos:
Visita o vértice 8.
Visita o vértice 9.
Fila:: 2, 6, 7, 8, 9.
iniFila = 4, tamFila = 10.

Vértice 2 não tem vizinhos não visitados:
iniFila = 5, tamFila = 10.

Vértice 6 não tem vizinhos não visitados:
iniFila = 6, tamFila = 10.

Vértice 7 visita seus vizinhos:
Visita o vértice 10.
Visita o vértice 11.
Visita o vértice 12.
Fila:: 8, 9, 10, 11, 12.
iniFila = 7, tamFila = 13.

Vértice 8 não tem vizinhos não visitados:
iniFila = 8, tamFila = 13.

Vértice 9 visita seus vizinhos:
Visita o vértice 13.
Visita o vértice 14.
Fila:: 10, 11, 12, 13, 14.
iniFila = 9, tamFila = 15.

Vértice 10 não tem vizinhos não visitados
iniFila = 10, tamFila = 15.

Vértice 11 não tem vizinhos não visitados
iniFila = 11, tamFila = 15.

Vértice 12 não tem vizinhos não visitados
iniFila = 12, tamFila = 15.

Vértice 13 não tem vizinhos não visitados
iniFila = 13, tamFila = 15.

Vértice 14 não tem vizinhos não visitados
iniFila = 14, tamFila = 15.

Fim da busca

Todos os vértices foram visitados e a fila está vazia.
iniFila = 15, tamFila = 15.
