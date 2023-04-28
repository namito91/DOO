//rectangulo.cpp

#include"rectangulo.h"

rectangulo::rectangulo(float b, float a){

}

rectangulo::rectangulo(){

}

void rectangulo::setAltura(float a){

}

float rectangulo::getAltura(){
    return altura;
}

void rectangulo::setBase(float b){

}

float rectangulo::getBase(){

    return base;

}

float rectangulo::area(){
    float a = 0.0;


    return a;
}

float rectangulo::perimetro(){
    float p = 0.0;

    return p;
}

int main ()
{

    rectangulo R1;
    rectangulo R2(4.5, 2.0);

    cout << "R1: "<< "perimetro = " << R1.perimetro() << " - Area = " 
        << R1.area() << endl;

    cout << "R2: "<< "perimetro = " << R2.perimetro() << " - Area = " 
        << R2.area() << endl;


    return 0;
}