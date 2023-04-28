#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#define LEN 100
using namespace std;


class ConjuntoEnteros {

    private:
        int *enteros;
         
    public:
        ConjuntoEnteros();
        ConjuntoEnteros( int[] , int );
        const int* unionDeConjuntos( ConjuntoEnteros&  );    
        void insertarElemento(int);
        void eliminarElemento(int);
        void imprimirConjunto();
        bool esIgualA( ConjuntoEnteros& );
        int* getEnteros() const;  
};
