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

int main(){
    float n;
    cin >> n;
    cout << JAZR (n);
}
