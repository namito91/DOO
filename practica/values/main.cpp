#include "app.cpp"


int main(int argc, char const *argv[])
{
    
    vector< int > a { 8 , 4 , 7 , 1 , 3 , 6 }; 
    vector< int > b { 1 , 2 , 5 }; 
    
    /*
    // double* pi = computes ( price , weight );
    double pi;
    pi = computes ( price , weight );

    cout << "index : " << pi  << endl;
*/

    int max = max_element ( a );

    cout << "max value : " << max << endl;

    return 0;
}
