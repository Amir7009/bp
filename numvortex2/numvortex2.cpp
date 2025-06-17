#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n, r, i, j, k=0, t;
    cin >> n;
    for ( j=1 ; j < 2*n ; j++ ){
        for ( i=0 ; i < 2*n ; i++ ){
            if ( i == abs(n-j) ){
                t=n-abs(n-j);
                for ( int r=1 ; r < 2*(t%(n+1)) ; r++ ){
                    cout << t-abs(t-r) << " ";
                }
                break;
            }
            cout << "  ";

        }
        cout << "\n";
    }
    return 0;
}
