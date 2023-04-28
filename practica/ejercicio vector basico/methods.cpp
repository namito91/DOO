#include "vector.h"


// metodos de la clase VEC4
vec4::vec4( float v1,float v2,float v3,float v4 ){

    setV1(v1);
    setV2(v2);
    setV3(v3);
    setV4(v4);

} 


void vec4::setV1(float v1){
    this->v1 = v1;
}

void vec4::setV2(float v2){
    this->v2 = v2;
}

void vec4::setV3(float v3){
    this->v3 = v3;
}

void vec4::setV4(float v4){
    this->v4 = v4;
}


float vec4::getV1(){
    return this->v1;
}

float vec4::getV2(){
    return this->v2;
}

float vec4::getV3(){
    return this->v3;
}

float vec4::getV4(){
    return this->v4;
}

void vec4::mostrarVector(){

    cout << "elementos : " << endl;
    cout << this->v1 << " " << this->v2 << " " << this->v3 << " " << this->v4 << endl;
} 



// metodos de la clase NODO 
void nodo::set_nodo( vec4 vector){
    this->vect = vector;
}


void nodo::set_sig( nodo &a){
    this->sig = &a;
} 


bool nodo::si_esta(vec4 vector){

    nodo *aux = this;

    while( aux != NULL){

        if (aux->vect.getV1() == vector.getV1() &&
            aux->vect.getV2() == vector.getV2() &&
            aux->vect.getV3() == vector.getV3() &&
            aux->vect.getV4() == vector.getV4()   ) {
            cout << "se ha encontrado el vector solicitado" << endl;    
            return true;        
        
        } else {
            cout << "buscando en siguiente nodo..." << endl;    
            aux = aux->sig;
        }
    }

    cout << "no se ha encontrado el vector solicitado" << endl;
    return false;
}


void nodo::mostrar(){

    nodo *aux = this;

    if (aux == NULL){
        cout << "la lista esta vacia" << endl;
        return;    
    } 

    while( aux != NULL ){

        cout << aux->vect.getV1() << " " << aux->vect.getV2() << " " << aux->vect.getV3() << " " << aux->vect.getV4() << endl;
        aux = aux->sig;
    }

    cout << "fin de la ejecucion" << endl;
}