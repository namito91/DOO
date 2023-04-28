#include <string>
#include <iostream>
using namespace std;


class factura {
    
    private:
        string numeroDePieza,descripcion,numeroDeFactura;
        int cantidadCompra,precio;

    public:
        factura(string,string,string,int,int);
        void setNumeroDeFactura(string);
        void setNumeroDePieza(string);
        void setDescripcion(string);
        void setCantidadCompra(int);
        void setPrecio(int);
        void printData();
        string getNumeroDePieza();
        string getDescripcion();
        string getNumeroDeFactura();
        int getCantidadCompra();
        int getPrecio();
        int getMontoFactura();    
};