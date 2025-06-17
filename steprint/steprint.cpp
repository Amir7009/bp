#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    for ( int i=1 ; i <= n ; i++ ){
        for ( int r=1 ; r < 2*i ; r++ )
            cout << i-abs(r-i);
            cout << " ";
    }
}
