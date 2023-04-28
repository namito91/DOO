#include "vector.h"

int main(int argc, char const *argv[])
{
    
    vec4 vector1( 2.0 , 1.0 , 6.4 , 4.7 );
    vec4 vector2( 2.3 , 4.4 , 5.3 , 7.3 );
    vec4 vector3( 25.0 , 10.0 , 3.1 , 5.4 );
    vec4 vector4( 12.0 , 31.0 , 62.4 , 41.7 );
    vec4 vector5( 122.0 , 31.0 , 62.4 , 41.7 );

    nodo nodo1;
    nodo nodo2;
    nodo nodo3;
    nodo nodo4;

    nodo1.set_nodo(vector1);
    nodo1.set_sig(nodo2);
    nodo2.set_nodo(vector2);
    nodo2.set_sig(nodo3);
    nodo3.set_nodo(vector3);
    nodo3.set_sig(nodo4);
    nodo4.set_nodo(vector4);
   // nodo4.set_sig(NULL);

    nodo1.mostrar();
    nodo1.si_esta(vector4);

    vector1.mostrarVector();

    return 0;
}
