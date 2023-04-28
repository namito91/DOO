#include "cabecera1.h"

    int contador = 0;

    void lote :: datos_del_lote ( int a ){
    
    int i = 0;
    int j = 0;
    
  //  string nombres_de_lote[] ;
    int numeros_de_lote[] ={ 0001,0002,0003,0004,0005,0006 }; // 4 ofertas por lote
    numero_actual = numeros_de_lote[i];
    oferta_registrada = a;
    //i++;
    //nombre_del_lote = x.lote_actual; 
    cout << "*** mayor oferta aceptada : " << oferta_registrada << "  del lote numero : " << numero_actual << endl;
    i++;
    
   // cout << " nombre del lote actual : " << nombre_del_lote << "numero de lote actual :" << numero_actual << endl;
    // inicia_subasta ( nombres_de_lote [ i - 1 ] , numeros_de_lote[ j - 1 ]  );
    
}; 

    
    void oferta :: oferta_realizada ( string ofertante ){
        
        nombre_ofertante = ofertante ;
        cout << " ingresa el monto de dinero a ofertar : " << endl;
        cin >> monto_ofertado;
        
        ofertas.push_back(monto_ofertado);
        cout << "monto ofertado : " << ofertas[contador] << endl;
        cout << "la persona : " << ofertante << "\n  oferto : " << ofertas [contador] << "  pesos " << endl; 
     //   contador++;
        
        if ( contador % 3  ==  0  &&  contador !=0 ){
            
            // calcular la oferta mas grande dentro de cada lote y registrarla en la clase lote 
            auto max_ =  *max_element ( begin ( ofertas ) , end (ofertas )  );
            int var = max_;
            cout << "oferta mas grande dentro del lote : "  << var << endl; 
            datos_del_lote ( var ); 
        }  
        contador++;
 
      //  vector <int> iterator I;
        
        
        
        /*
        if ( i == 3 ){
            
            oferta_mas_grande = max_element ( ofertas , ofertas + 4  );
            
            datos_del_lote (  );
        }
        */
   
        
    }

    
    void persona :: mostrar_cadena (  ){ 
        
        // int i = 0;
       // nombre_persona = a;
        cout << "ingrese su nombre" << endl;
        cin >> nombre_persona;
        nombre.push_back( nombre_persona ); 
        
       // getline ( cin , nombre_persona ) ;
        cout << " nombre del ofertante : " << nombre[contador] << endl;  
        
        oferta_realizada ( nombre_persona ); // como paso un vector a otra clase base ?
       // i++;
        
    }
    
   
    void subasta :: inicializa (){
        
        cantidad_de_lotes = 4;
        coleccion_de_lotes.push_back( " comestibles " );
        coleccion_de_lotes.push_back( " metales " );
        coleccion_de_lotes.push_back (" herramientas industriales ");
        coleccion_de_lotes.push_back (" muebles ");
    }
    
    
    void subasta :: inicia_subasta (  ){
        
        // int i;
        // i = 0;
        
        for ( int i = 0; i < 4 ; i ++ ){
            for ( int j = 0;  j < 4 ; j++ ){
                
                lote_actual = coleccion_de_lotes [ i ];
                cout << " nombre_del_lote actual : " << lote_actual << endl ; 
                // cout << " numero del lote actual : " << numero_actual << endl;
                // persona x;
             
                mostrar_cadena ();
             
                // i++;  
                
            }
        }
        }
        
        
  //  void subasta ::     
        
    
   // i++;
    
       // 
    

int main(int argc, char * argv[])
{
    /*    
    int constante = 0;
    
    
    while ( constante < 10 ){
        
        cout << " ingresa tu nombre y la cantidad de dinero a ofertar por el lote " << endl;
        
        persona x;
        x.mostrar_cadena ( ) ;
    }
    */
    
    // lote x;
   // x.datos_del_lote ();

    

    subasta x;
    x.inicializa ();
    x.inicia_subasta ();
    //x.mostrar_cadena();
    //x.inicia_subasta();  
    subasta b;
    
    return 0;
};

