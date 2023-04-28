#include <string>
#include <iostream>
using namespace std;

class cuenta {

    private:
        int saldo;
        string nombreCuenta;

    public:
        cuenta(int,string);
        void credit(int);
        void retirar(int);
        int obtenerSaldo();
};