#include "header.h"

int main(int argc, char const *argv[])
{
    
    factura f1("0001" , "02101" , "un destornillador" , 3 , 500);
    f1.printData();
    
    factura f2("0001" , "15167" , "un almanaque" , -3 , 500);
    f2.printData();


    return 0;
}
