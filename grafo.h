typedef struct Vertice{
	char dato;
	struct Vertice* siguiente;
	struct Arista* lista;
}Vertice;

typedef struct Arista{
	struct Arista* siguiente;
	struct Vertice* destino;
}Arista;

typedef struct Grafo{
	struct Vertice* inicio;
}Grafo;
