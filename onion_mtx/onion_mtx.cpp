#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
#define S 31;

int main (){
    char m[S][S], ch;
    int i, j, n, k;
    cout << "enter a char: ";
    cin >> ch;
    ch = ( ch >= 'a' && ch <= 'z' )? ch-32 : ch ;
    n = ch - 64;
    for ( k=0 ; k < n ; k++ )
        for ( i=k ; i < 2*n-k ; i++ )

}
