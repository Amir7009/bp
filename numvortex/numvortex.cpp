#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n, i, j, r, c, x;
    cout << "enter a number: ";
    cin >> n;
    for ( int i=1 ; i < 2*n ; i++ ){
        r = n-abs(n-i);
        for ( int j=1 ; j < 2*n ; j++ ){
            c = n-abs(n-j);
            x = (r<c)? r : c;
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;

}
