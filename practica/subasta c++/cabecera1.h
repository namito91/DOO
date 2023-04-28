#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


//#include "subasta_clases.cpp"
using namespace std;  


class lote {

    private :
    
    int numero_del_lote;
    string nombre_del_lote;
   // int monto_ingresado; // guarda la oferta mas grande
    int oferta_registrada;
    int numero_actual;
   // subasta x;
    
   // persona x ;
    
    public:
    
    lote (){};
    ~lote (){};
    
    void  datos_del_lote( int );
        
    
    
};


class oferta : public lote {

private:

    lote lote1 ;
    int monto_ofertado;
    string nombre_ofertante;
    vector <int> ofertas;
    
public:
    
    oferta (){};
    ~oferta (){};
    
    void oferta_realizada ( string );
    
    
    
}; 


class persona : public oferta  {
    
protected : 
    
   vector<string> nombre;
   string nombre_persona;
   
public:
    
    persona (   ) {
      // cout << "constructor de persona..." << endl;
         // nombre_persona = x;
    };

    ~persona (){};
    
    void mostrar_cadena (  );
    
}; 


class subasta : public persona {
    
protected:  
    vector<string> coleccion_de_lotes ;
    int cantidad_de_lotes; 
  
public:
    string lote_actual;
    subasta(){};
   // persona(){} ;
    ~subasta(){};
    
    void inicializa ();
    void inicia_subasta (  );
    
};
