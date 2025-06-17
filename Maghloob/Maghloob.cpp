#include <iostream>
using namespace std ;

int main( ){
    int m, i, j=0 ;
    cin >> m ;
	while ( m != 0 ){
        i = m%10 ;
        m = m/10 ;
        j = j*10 + i ;
	}
    cout << j;
}
