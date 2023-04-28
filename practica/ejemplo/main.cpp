#include <iostream>
#include <algorithm>
#include "header.h"
using namespace std;


int queseyo:: getValue(){
    return a;
}

int main() {
    
    Punto p1;
    queseyo q;
    Punto *pPto;
    pPto = new Punto(2, 4 , q);
    //delete pPto;
    //queseyo *pto;
   // pto = new Punto(1,2);
    pPto->escribir();
    q.getValue();
    
    pPto->returnValue().saludar();
    cout << pPto->returnValue().getValue() << endl;

    return 0;
}

