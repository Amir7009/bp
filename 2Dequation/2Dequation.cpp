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

int main (){
    float a, b, c, d, x1, x2;
    cout << "Enter the factors of equation:" << "\na= ";
    cin >> a;
    cout << "\nb= ";
    cin >> b;
    cout << "\nc= ";
    cin >> c;
    if (a==0){
        cout << "error";
        return 0;}
    d = b*b-4*a*c;
    if (d<0){
        cout << "real root not found";
        return 0;}
    if (d==0){
        x1 = -b/(2*a);
        cout << "doubly root is: " << x1;
        return 0;}
    d = JAZR (d);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);
    cout << "x1= " << x1 << "\tx2= " << x2;
    return 0;
}
