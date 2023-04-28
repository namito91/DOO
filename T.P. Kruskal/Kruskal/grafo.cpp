#include "grafo.h"

void grafo::insertar_vertice(const char &v)
{
    // valida que no se ingrese un vertice ya existente,y no mas de 10 vertices
    for (size_t i = 0; i < V.size(); i++)
    {
        if (V.at(i) == v)
        {
            cout << "vertice ya existente" << endl;
            cout << "no se agrego en el conjunto" << endl;
            return;
        }
    }
    
    if (V.size() == 10)
        cout << "limite de vertices superado" << endl;
    else
        V.push_back(v);
}

void grafo::insertar_arista(const char &v1, const char &v2, const int &peso)
{
    // no se pueden ingresar mas de 15 aristas
    if (E.size() > 15)
    {
        cout << "limite de aristas superados(mas de 15)" << endl;
    }
    // valida que el peso ingresado no sea mayor a 20 ni menor a 0
    else if (peso < 0 || peso > 20)
    {
        cout << "peso ingresado incorrecto, debe ser entre 0 y 20 " << endl;
    }
    // valida que no puede haber mas de 4 aristas entre dos vertices(pueden tener el mismo peso)
    else if (aristasSalientesDelVertice[v1] > 4 || aristasSalientesDelVertice[v2] > 4)
    {
        cout << "el vertice/s ingresado ya contiene 4 aristas salientes" << endl;
        cout << "no es posible agregar esta arista" << endl;
    }
    // no puede haber mas de 3 bucles en el mismo vertice
    else if (v1 == v2 && aristasSalientesDelVertice[v1] > 3 || aristasSalientesDelVertice[v2] > 3)
    {
        cout << "cantidad de bucles en el mismo vertice supero el limite" << endl;
        cout << "no es posible agregar esta arista" << endl;
    }
    else
    {
        aristasSalientesDelVertice[v1]++;
        aristasSalientesDelVertice[v2]++;
        E.push_back(arista{{v1, v2}, peso});
        cout << "arista ingresada con exito : "
             << E.at(contador).first.first << " "
             << E.at(contador).first.second << " peso :"
             << E.at(contador).second << endl;

        contador++;

        cout << "cantidad de aristas ingresadas : " << contador << endl;
    }
}

void grafo::insertar_arista()
{
    int cantidadAristas = 0, peso = 0;
    char v1, v2;

    cout << "ingresa la cantidad de aristas a usar : " << endl;
    cout << "(no ingresar mas de 15 aristas)" << endl;
    cin >> cantidadAristas;

    // !(cin >> cantidadAristas), valida el tipo de dato
    while (cantidadAristas < 0 || cantidadAristas > 15 || !(cin >> cantidadAristas))
    {
        cout << "valor incorrecto" << endl;
        cout << "ingresa nuevamente la cantidad de aristas a usar : " << endl;
        cout << "(no ingresar mas de 15 aristas)" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> cantidadAristas;
    }

    while (contador < cantidadAristas)
    {
        cout << " Vertices : " << endl;
        for (size_t i = 0; i < V.size(); i++)
        {
            cout << i << " : " << V.at(i) << endl;
        }

        cout << "elegi la opcion del vertice 1 " << endl;
        cin >> v1;
        cout << "elegi la opcion del vertice 2 " << endl;
        cin >> v2;
        cout << "ingresa el peso de la arista o bucle(entre 0 y 20) " << endl;
        cin >> peso;

        // valida que sean opciones existentes
        // valida el tipo de dato ingresado
        while (v1 < 0 || v1 > V.size() || v2 < 0 || v2 > V.size() || !(cin >> v1) || !(cin >> v2))
        {
            cout << "opciones incorrectas,volve a ingresarlas " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << " Vertices : " << endl;
            for (size_t i = 0; i < V.size(); i++)
            {
                cout << i << " : " << V.at(i) << endl;
            }

            cout << "elegi la opcion del vertice 1 " << endl;
            cin >> v1;
            cout << "elegi la opcion del vertice 2 " << endl;
            cin >> v2;
        }

        // valida el peso ingresado y su tipo de dato
        while (peso < 0 || peso > 20 || !(cin >> peso))
        {
            cout << "valor del peso incorrecto" << endl;
            cout << "ingresa nuevamente el peso de la arista o bucle(entre 0 y 20) " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> peso;
        }

        // no puede haber mas de 4 aristas entre dos vertices
        if (aristasSalientesDelVertice[v1] > 4)
        {
            cout << "el vertice " << v1 << " ya contiene 4 aristas salientes" << endl;
            cout << "no es posible agregar esta arista" << endl;
        }
        else if (aristasSalientesDelVertice[v2] > 4)
        {
            cout << "el vertice " << v2 << " ya contiene 4 aristas salientes" << endl;
            cout << "no es posible agregar esta arista" << endl;
        }
        // valida que no haya mas de 3 bucles en el mismo vertice
        else if (v1 == v2 && (aristasSalientesDelVertice[v1] > 3 || aristasSalientesDelVertice[v2] > 3))
        {
            cout << "cantidad de bucles en el mismo vertice supero el limite" << endl;
            cout << "no es posible agregar esta arista" << endl;
        }
        else
        {
            E.push_back(arista{{v1, v2}, peso}); // ingresa la arista al vector con exito
            cout << "arista ingresada con exito : " << E.at(contador).first.first << " " << E.at(contador).first.second << " peso :" << E.at(contador).second << endl;

            // incrementa la arista saliente de cada vertice en 1 unidad
            aristasSalientesDelVertice[v1]++;
            aristasSalientesDelVertice[v2]++;

            contador++;
            cout << "cantidad de aristas ingresadas : " << contador << endl;
        }
    }
}

void grafo::inicial(const char &conjunto, const char &vertice)
{
    auto it = CE.nombres.find(conjunto);
    auto it2 = CE.nombres.begin();

    // valida que no se use el mismo vertice para distintos conjuntos(componentes)
    // y que no se elija el mismo nombre de un conjunto ya existente
    for (it2;; it2++)
    {
        if (it2->first != NULL && it2->second.second == vertice)
        {
            cout << "el vertice ya se encuentra en un conjunto " << endl;
            cout << "no se puede usar en otro conjunto" << endl;
            return;
        }
    }

    if (it != CE.nombres.end())
    {
        cout << "el conjunto ya se encuentra ingresado,elegi otro nombre" << endl;
    }
    else
    {
        CE.nombres.insert({conjunto, {vertice, 0}});
        CE.encabezados.insert({conjunto, {1, vertice}});
    }
}

void grafo::combina(const char &c1, const char &c2)
{
    auto itE1 = CE.encabezados.find(c1);
    auto itE2 = CE.encabezados.find(c2);
    auto itN1 = CE.nombres.find(c1);
    auto itN2 = CE.nombres.find(c2);
    auto it = CE.nombres.begin();

    // valida si los dos conjuntos son disjuntos
    if (c1 == c2)
    {
        cout << "los dos conjuntos pertenecen al mismo componente.fin" << endl;
        return;
    }

    // guarda el primer elemento(vertice) del c2
    char i = CE.encabezados.find(c2)->second.second;

    // compara en tamaño de los dos conjuntos
    // si el conjunto 1 es mayor,combina el conjunto 2 dentro del conjunto 1
    if (itE1->second.first > itE2->second.first)
    {
        while (it->first != NULL)
        {
            // avanza en el conjunto c2 y cambia el nombre de conjunto de sus vertices
            // por el nombre de conjunto de c1
            if (it->first == c2)
            {
                CE.nombres[it->first].first = c2;
            }
            it++;
        }

        // agrega a la lista A al final de la B y llama A al resultado |
        // ahora i es el ı́ndice del último elemento de B |
    }
}
