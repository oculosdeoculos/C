/*Opera��es sobre Grafo direcionado.*/

#include <stdio.h>
#include <stdlib.h>

// elemento das listas de adjac�ncia e de resposta
typedef struct estr {
        int v; // elemento
	int peso; // custo (n�o precisa ser usado na resposta)
        struct estr *prox;
} NO;

// vertices do grafo (salas) - use este tipo ao criar o grafo
typedef struct 
{
       int flag; // para uso na busca em largura e profundidade, se necessario
       NO* inicio;
} VERTICE;

void destroiArestas(VERTICE *g){
     int tam = sizeof(g);
     
}     

int main () {

	return 0;
}
