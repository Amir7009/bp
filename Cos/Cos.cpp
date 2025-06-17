#include <iostream>
using namespace std;

float Cos (float d){
    float r, p, q, Cos, f, k;
    int i;
    if ( d==60 )
        return 0.5;
    r = 3.1415*d/180;
    q = r*r;
    p = q;
    f = 2;
    k = -1;
    i = 2;
    Cos = 1;
    while ( p/f>=0.0001 ){
        Cos = Cos + k*p/f;
        p = p*q;
        i = i+2;
        k = -k;
        f = f*(i-1)*i;
    }
    return Cos;
}

int main (){
    float a;
    cin >> a;
    cout << Cos (a);
}
