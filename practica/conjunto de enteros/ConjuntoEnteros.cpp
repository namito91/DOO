#include "ConjuntoEnteros.h"


ConjuntoEnteros::ConjuntoEnteros(){
    
    enteros = new int[LEN];
    fill_n ( enteros, LEN, 0 );

}


ConjuntoEnteros::ConjuntoEnteros(int arr[] , int sizee){

    enteros = new int[LEN];
    for (int i = 0; i < sizee; i++)
    {
        if ( arr[i] == 1 ){
            
            getEnteros()[i] = 1;
        
        }else{
            
            getEnteros()[i] = 0;
        }
    }
    
}


const int* ConjuntoEnteros::unionDeConjuntos(ConjuntoEnteros& e1){

    int *e2 = new int[ LEN ];
   
    for (int i = 0; i < LEN ; i++)
    {
        e2[i] = 0;
    }
    
        
    for (int i = 0; i < LEN ; i++)
    {
        if ( (getEnteros()[i] == e1.getEnteros()[i] && getEnteros()[i] != 0 ) 
              || (getEnteros()[i] == 1 || e1.getEnteros()[i] == 1) )
        {
            
            e2[i] = 1;

            cout << "elemento " << i << "esta en el conjunto" << endl; 
        }    
    }
    
    return e2;
}


void ConjuntoEnteros::insertarElemento(int a){

    if ( getEnteros()[a] == 1 ){
        
        cout << " el conjunto ya posee este elemento : " << a << endl;
    
    }else{

        getEnteros()[a] = 1;
        cout << "elemento insertado : " << a << endl;
    }
}


void ConjuntoEnteros::eliminarElemento(int a){

     if ( getEnteros()[a] == 0 ){
        
        cout << " el conjunto no posee este elemento : " << a << endl;
    
    }else{

        getEnteros()[a] = 0;
        cout << "elemento eliminado : " << a << endl;
    }
}


void ConjuntoEnteros::imprimirConjunto(){

    cout << "elementos del conjunto" << endl; 
    
    for (int i = 0; i < LEN; i++)
    {
        if (getEnteros()[i] == 1){
            
            cout << i << " ";
        }
         
    }
    
    cout << "" <<  endl;
}


bool ConjuntoEnteros::esIgualA( ConjuntoEnteros& e2 ){

    int i = 0;
    bool result = false;

    while ( i < LEN  ){

        if ( getEnteros()[i] == e2.getEnteros()[i] )    
        result = true;
        else 
        result = false;

        i++;
    }

    return result;
}



int* ConjuntoEnteros::getEnteros() const{

    return enteros;
} 

