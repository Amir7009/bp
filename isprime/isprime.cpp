#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    if ( n==2||n==3 ){
        cout << "Yes";
        return 0;
    }
    if ( n<2 || 0==n%2 ){
        cout << "No";
        return 0;
    }
    i=3;
    while ( i<(n/2) ){
        if (0==n%i){
            cout << "NO";
            return 0;
        }
        i+=2;
    }
    cout << "Yes";

}
