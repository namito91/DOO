#include <iostream>
#include <queue>
#include "grafo.h"

/* *
 * \ type arbol
 * \ brief lista de prioridad de aristas ordenada de menor a mayor costo
 *
 * Arbol es una priority_queue de aristas .
 * El criterio de ordenamiento lo da MenorValor la cual establece la comparacion de los costos de las aristas
 */
typedef priority_queue<arista, vector<arista>, MenorValor> arbol;

/* *
* \ class MenorValor
*
^ \ brief Clase que fija el criterio de ordenamiento a la cola de prioridad
*
* la priority_queue definida como tipo arbol guarda las aristas ordenadamente* segun su peso de menor a mayor
para luego poder ser usada en el algoritmo
*
*/
class MenorValor
{
public:
    /* *
     * \ brief sobrecarga al operador () para la comparacion de pesos
     * \ param e1 de tipo arista
     * \ param e2 de tipo arista
     * \ return true en caso que el peso de e1 sea mayor al de e2
     */
    bool operator()(arista e1, arista e2)
    {
        return e1.second > e2.second;
    }
};
