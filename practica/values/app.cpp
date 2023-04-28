// #include "cabecera.h" 
#include <iostream>  
#include <vector> 
#include <algorithm> 
using namespace std;

struct values {

    int mean, median , max , min ;

};

double computes ( vector <double>& p , vector <double>& w ) {

    double var = 0;
    //double* ptr = &var;

    if ( w.size() <= p.size() ){

        for ( int i = 0 ; i < w.size() ; i++ )
        {
            var += (p [i]) * (w [i]) ;
            
        }
    }
    
    cout  << "ptr : " << var << endl;
    return var ;
} 

int max_element ( vector <int>& vect ) {  

    int temp = 0 ; 

    for (int i = 0; i < vect.size() ; i++)
    {
        if ( vect [i] > temp )
            temp = vect [i];

        /* code */
    }
    
    return temp;
} 

values* mean_median_etc ( vector <double>& vect ) {

    double mean, median , max , min ;

    for ( int i = 0; i < vect.size() ; i++)
    {
        mean += vect [i] ;


        /* code */
    }
    
    
}