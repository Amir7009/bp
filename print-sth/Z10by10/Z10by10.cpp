#include <iostream>
using namespace std;

int main (){
    int i, j, n;
    for ( i=1 ; i<=10 ; i++ ){
        for ( j=1 ; j<=10 ; j++ ){
            n=i*j;
            cout << n << "\t";
        }
        cout << "\n\n";
    }//it prints a 10*10 multiply table.

}
