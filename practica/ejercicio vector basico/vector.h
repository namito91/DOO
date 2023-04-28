#include <iostream>
using namespace std;

// Ejercicio: lista de Vectores de cuatro elementos
/* Estructura básica */
class vec4{
    
    private:
        float v1, v2, v3, v4;
    
    public:
    
    /*
    Dos constructores, uno inicializando en 0.0 los componentes
    otro que recibe cuatro floats
    metodos gets y sets para cada uno de los componentes
    una funcion mostrar() que imprime por pantalla el vector
    */
    vec4 () : v1(0.0) , v2(0.0) , v3(0.0) , v4(0.0) {}    
    vec4(float,float,float,float);
    ~vec4();    
    void setV1(float);
    void setV2(float);
    void setV3(float);
    void setV4(float);
    float getV1();
    float getV2();
    float getV3();
    float getV4();
    void mostrarVector();

};


class nodo{
    
    private:
        vec4 vect;
        nodo* sig;
    
    public:
        nodo(){sig=NULL;}
        ~nodo();
        void set_nodo(vec4);
        void set_sig(nodo &);
        bool si_esta(vec4);
        void mostrar();
};