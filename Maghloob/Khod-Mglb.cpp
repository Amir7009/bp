#include <iostream>
using namespace std ;

int main( ){
int n, m, i, j=0 ;
cin >> n ;
m = n ;
if ( 1<=n and n<=2000000000){
	while ( m != 0 ){
	i = m%10 ;
	m = m/10 ;
	j = j*10 + i ;
	}
	if ( n == j )
	cout << "YES" ;
	else
	cout << "NO" ;
}
else
cout << "ERROR" ;
}
