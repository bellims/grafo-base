typedef struct Vertice{
	char dato;
	struct Vertice* sig;
	struct Arista* lista;
}Vertice;

typedef struct Arista{
	struct Arista* sig;
	struct Vertice* destino;
}Arista;

typedef struct Grafo{
	struct Vertice* inicio;
}Grafo;
