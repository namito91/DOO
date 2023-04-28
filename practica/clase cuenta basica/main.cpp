#include "header.h"

int main(int argc, char const *argv[])
{
    cuenta c1(100,"0001");
    cuenta c2(60,"0002");

    c1.obtenerSaldo();
    c1.credit(50);
    c1.retirar(155);
    c1.retirar(30);

    return 0;
}
