#include <iostream>
#include <math.h>
using namespace std;

int main (){
    char q;
    cin >> q;
    int n, r, c, t;
    n = q - 96;
    for ( int i = 1 ; i < 2*n ; i++ ){
        r = n - abs(n-i);
        for ( int j = 1 ; j < 2*n ; j++ ){
            c = n - abs(n-j);
            t = ( c < r )? c : r ;
            char p = t+96;
            cout << p << " ";
        }
        cout << "\n";
    }
}
