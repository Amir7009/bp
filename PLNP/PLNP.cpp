#include <iostream>
using namespace std;

float MyAbs (float x){
    if (x>=0)
        return x;
    else
        return -1*x;
}

float JAZR (float x){
    float a, b;
    if (x<=0)
        if (x==0)
            return x;
        else
            cout << "for " << x << " real root not found.";
    b=1;
    do {
        a=b;
        b=0.5*(a+x/a);
    }while ( MyAbs (a-b)>=1e-5);
    return b;
}

bool Isprime (int n) {
    if ( n==2 || n==3 )
        return true;
    if ( 0==n%2 )
        return false;
    for (int i = 3 ; i <= JAZR (n) ; i += 2 )
        if ( 0 == n%i )
            return false;
    return true;
}

main (){
    int n, t;
    cout << "Enter your number: \n";
    cin >> n;
    for ( int i=2 ; i<=n ; i++ ){
        if ( Isprime(i))
            cout << i << "\t";
    }
}
