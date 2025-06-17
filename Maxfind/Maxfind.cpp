#include <iostream>
using namespace std;

int Maxfind ( int s[], int n ){
    int m=-1e10;
    for ( int i=0 ; i<=n ; i++ )
        m = ( m >= s[i] )? m : s[i];
    return m;
}
