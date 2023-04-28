#include <iostream>
using namespace std;

class queseyo {

int a;

public:
    queseyo(){a = 0;};
    ~queseyo(){};
    int getValue ();
    void saludar(){
        cout << "holaa"<< endl;
    }

};


class Punto {
  
private:
    int m_x; // X coordinate
    int m_y; // Y coordinate
    queseyo a;

public:
    Punto(){
        m_x = 0;
        m_y = 0;
        cout << "Point object initialized" <<endl;
    }

    Punto(int x, int y, queseyo q){
        m_x = x;
        m_y = y;
        a = q;

    }; //otro contructor
    // resto de las funciones

    void incrementarQ(){
       // a.getValue() = a.getValue()+1; 
    }

    queseyo returnValue (){
         
        return a;
    }

    void escribir(){
        cout << m_x << " " << m_y << " " << a.getValue() << endl;
    }
}; 

