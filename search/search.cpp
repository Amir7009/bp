#include <iostream>
using namespace std;
#define SIZE 50

int searching ( int s[], int n, int d ){
    for ( int i=0 ; i<n ; i++ )
    if ( s[i] == d ){
        return i;
    }
}

int main( ) {
	int s[SIZE], n, x, i;
	int tmp;
	cout << "enter input data end by -10000: ";
	cin >> x;
	n=0;
	while(x!=-10000){
		s[n++]=x;
		cin >> x;
	}
	cout << "enter a data for search: ";
	cin >> i;
	cout << "pos= " << searching(s, n, i)+1;

}
