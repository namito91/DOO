#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <queue>
#include <limits>
#include "menorValor.h"
using namespace std;
int contador = 0;

/* *
 * \ type arista : Tipo definido por un pair de pair y entero
 *
 * Arista esta compuesta por un pair < pair < char , char > , int >
 * ambos char son vertice origen y destino y el int el costo entre ellos
 */
typedef pair<pair<char, char>, int> arista; // v1 , v2 y costo entre ellos

/*
* \ struct combina_encuentra

* @param nombres: es un map cuya key sera un char ( nombre del conjunto )
 y un pair con el vertice y el vertice siguiente ( adyacente)

* @param encabezados: map cuya key sera un char ( conjunto ) y un pair que tiene a
* un entero como indice de cantidad de adyacencias y el primer elemento del conjunto de vertices .
*/
typedef struct combina_encuentra
{
    map<char, pair<char, char>> nombres;    // conjunto, vertice y vertice siguiente
    map<char, pair<int, char>> encabezados; // conjunto, cuenta y primer elemento

} conjunto_CE;

class grafo
{
    vector<char> V;   // Conjunto de vertices
    vector<arista> E; // Conjunto de aristas con sus pesos
    // contenedor de la cantidad de aristas salientes de cada vertice
    // sirve para controlar la cantidad de aristas del grafo
    map<char, int> aristasSalientesDelVertice;
    conjunto_CE CE;              // Estructura para el analisis de adyacencias
    arbol grafo_ordenado;        // cola de prioridad con los pesos de las aristas
    vector<arista> arbol_minimo; // Arbol minimal

public:
    grafo() {}                                                     // / constructor
    ~grafo() {}                                                    // / destructor
    void insertar_vertice(const char &);                           // Guarda los vertices en el conjunto V
    void insertar_arista(const char &, const char &, const int &); // / Guarda las aristas en el Conjunto E
    void insertar_arista();                                        // Guarda las aristas en el conjunto E pidiendolas ingresar por Teclado
    void inicial(const char &, const char &);                      // inicializa a las estructuras de conjunto COMBINA-ENCUENTRA
    // (cada vertice es un componente conexo por si mismo)
    void combina(const char &, const char &); // Combina los conjuntos que se encuentran formando el árbol
    char encuentra(const char &);             // / Encuentra los vertices dentro del conjunto COMBINA - ENCUENTRA
    void kruskal();                           // Algoritmo generador del árbol recubridor minimal
    void inserta();                           // Guarda al conjunto E dentro de la cola de prioridad teniendo en cuenta los costos.
    // arista sacar_min();
    friend ostream &operator<<(ostream &, grafo); // Sobrercarga de la salida estandar para mostrar al grafo
};

#endif