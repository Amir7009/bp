#include <iostream>
using namespace std;

int main (){
    for ( int i=1 ; i <11 ; i++ ){
        for ( int j=1 ; j < 11 ; j++ ){
            if ( i+j >= 11 )
                cout << i*j << "\t";
            else
                cout << " \t";
        }
        cout << "\n";
    }
}
