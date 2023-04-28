#include "header.h"


cuenta::cuenta(int saldo,string nombreCuenta){

    if(saldo < 0){
        this->saldo=0;
        cout << "valor invalido" << endl;
        return;
    }
    
    this->saldo = saldo;
    this->nombreCuenta = nombreCuenta;
} 


void cuenta::credit(int monto){

    this->saldo += monto;
    obtenerSaldo();

}


void cuenta::retirar(int monto){

    if(monto > this->saldo){
        cout << "valor a retirar " << monto << " excede el saldo disponible" << endl;
        return;
    }

    this->saldo -= monto;
    obtenerSaldo();

}


int cuenta::obtenerSaldo(){

    cout << "cuenta : " << this->nombreCuenta << " saldo actual :" << this->saldo << endl;
    return this->saldo;
}