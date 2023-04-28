#include "header.h"


factura::factura(string numeroDeFactura , string numeroDePieza,string descripcion,
int cantidadCompra,int precio) {

    setNumeroDeFactura(numeroDeFactura);
    setNumeroDePieza(numeroDePieza);
    setDescripcion(descripcion);
    setCantidadCompra(cantidadCompra);    
    setPrecio(precio);
} 


void factura::setNumeroDeFactura(string numeroDeFactura){
    this->numeroDeFactura = numeroDeFactura;
}

void factura::setNumeroDePieza(string numeroDePieza){
    this->numeroDePieza = numeroDePieza;
}


void factura::setDescripcion(string descripcion){
    this->descripcion = descripcion;     
}


void factura::setCantidadCompra(int cantidadCompra){

    if (cantidadCompra <= 0){
        this->cantidadCompra = 0;
        return;
    }
    
    this->cantidadCompra = cantidadCompra;
}


void factura::setPrecio(int precio){

    if (precio <= 0){
        this->precio = 0;
        return;
    }

    this->precio = precio;
}


string factura::getNumeroDePieza(){
    return this->numeroDePieza;
} 


string factura::getDescripcion(){
    return this->descripcion;
} 


int factura::getCantidadCompra(){
    return this->cantidadCompra;
} 


int factura::getPrecio(){
    return this->precio;
} 


string factura::getNumeroDeFactura(){
    return this->numeroDeFactura;
}

int factura::getMontoFactura(){
    return getCantidadCompra() * getPrecio(); 
} 


void factura::printData(){
    cout << "factura numero : " << getNumeroDeFactura() << endl;
    cout << "numero de pieza : " << getNumeroDePieza() << " descripcion : " << getDescripcion() << endl;
    cout << "cantidad a comprar : " << getCantidadCompra() << " precio unitario : " << getPrecio() << endl;
    cout << "monto total de la factura : " << getMontoFactura() << endl;
}

