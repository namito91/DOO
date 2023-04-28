#include "ConjuntoEnteros.h"


int main(int argc, char const *argv[])
{
    
    srand (time(NULL));
 
    int arr [LEN];
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < sizeArr; i++)
    {
        arr[i] = rand() % 2;
       // cout << i << " " << arr[i] << endl;
    }
        
    ConjuntoEnteros e1(arr , sizeArr);
    // ConjuntoEnteros e2;
    const int* ptr;
    
    //ptr = e1.unionDeConjuntos(e2);
    // ptr = e1.getEnteros();
    e1.imprimirConjunto();
    ptr = e1.getEnteros();
   
    for (int i = 0; i < 100 ; i++)
    {
        cout << "conjunto " << ptr[i] << endl;
    }
    

    return 0;
}
