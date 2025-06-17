#include <iostream>
using namespace std;
#define s 10

int main (){
    int n, m, d;
    cout << "enter the size of matrix: " << "\nn= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    int M [s][s];
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin >> d;
            M [i][j]= d;
        }
    }
    cout << M[3][2];
}
