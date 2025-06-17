#include <iostream>
using namespace std;

int multiply (int n, int m){
    return n*m;
}
int B_M_M (int i, int j){
    int g;
    do {
        g=i%j;
        i=j;
        j=g;
    } while ( g!=0 );
    return i;
}

int main (){
    int a, b;
    cout << "Enter two numbers:\n";
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    int M, B, K;
    M = multiply (a,b);
    B = B_M_M (a,b);
    K = M/B;
    cout << "the K_M_M of a & b is: " << K;
}
