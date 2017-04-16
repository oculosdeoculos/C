/*Operações sobre Grafo direcionado.*/

#include <stdio.h>
#include <stdlib.h>

// elemento das listas de adjacência e de resposta
typedef struct estr {
        int v; // elemento
	int peso; // custo (não precisa ser usado na resposta)
        struct estr *prox;
} NO;

// vertices do grafo (salas) - use este tipo ao criar o grafo
typedef struct 
{
       int flag; // para uso na busca em largura e profundidade, se necessario
       NO* inicio;
} VERTICE;

void profLoop(VERTICE *g, int i, int *loop){ //onde loop é um contador de loops;
     g[i].flag = 1; //Descoberto;
     NO* p = g[i].inicio;
     while (p)
     {
           if(p->v == i) loop++;
           if(g[p->v].flag == 0) profLoop(g, i, loop);
           p = p->prox;
     }
     g[i].flag = 2;
}     

int main () {

	return 0;
}
