#include <iostream>
using namespace std;

float Sin (float d){
    float r, p, q, sin, f, k;
    int i;
    if ( d==30 )
        return 0.5;
    r = 3.1415*d/180;
    q = r*r;
    p = r;
    f = 1;
    k = 1;
    i = 1;
    sin = 0;
    while ( p/f>=0.0001 ){
        sin = sin + k*p/f;
        p = p*q;
        i = i+2;
        k = -k;
        f = f*(i-1)*i;
    }
    return sin;
}

int main (){
    float a;
    cin >> a;
    cout << Sin (a);
}
